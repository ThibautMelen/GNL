/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmelen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 14:34:54 by thmelen           #+#    #+#             */
/*   Updated: 2018/05/04 18:02:39 by thmelen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int		cut_save_surplus(char **line, t_list *this_file)
{
	int		start;
	int		end;
	char	*tmp;

	start = -42;
	end = 0;
	while (((char *)this_file->STR_TMP)[end] != '\0')
	{
		if (start == -42)
			if (((char *)this_file->STR_TMP)[end] == '\n')
				start = end;
		end++;
	}
	if (start == -42)
		start = end;
	if (!(*line = ft_strnew(start)))
		return (LINE_END_READ);
	ft_strncpy(*line, (char *)this_file->STR_TMP, start);
	if (!(tmp = ft_strnew(end - start)))
		return (LINE_END_READ);
	ft_strncpy(tmp, ((char *)this_file->STR_TMP) + start + 1, (end - start));
	free((char *)this_file->STR_TMP);
	this_file->STR_TMP = tmp;
	return (LINE_IS_READ);
}

static t_list	*get_create_fd(t_list **save_list, const int fd)
{
	t_list	*actual_list;

	actual_list = *save_list;
	while (actual_list != NULL)
	{
		if ((int)actual_list->FD == fd)
			return (actual_list);
		else
			actual_list = actual_list->next;
	}
	if (actual_list == NULL)
	{
		if (!(actual_list = ft_lstnew("\0", 1)))
			return (NULL);
		actual_list->FD = fd;
		ft_lstadd(save_list, actual_list);
	}
	return (actual_list);
}

int				get_next_line(const int fd, char **line)
{
	static t_list	*save_list;
	t_list			*this_file;
	char			buff[BUFF_SIZE + 1];
	char			*tmp;
	int				nb_oct_read;

	if ((BUFF_SIZE < 1 || line == NULL || fd < 0 || read(fd, buff, 0) < 0))
		return (LINE_ERROR_READ);
	this_file = get_create_fd(&save_list, fd);
	while ((nb_oct_read = read(fd, buff, BUFF_SIZE)) > LINE_END_READ)
	{
		buff[nb_oct_read] = '\0';
		tmp = (char *)this_file->STR_TMP;
		if (!(this_file->STR_TMP = ft_strjoin(tmp, buff)))
			return (LINE_ERROR_READ);
		free(tmp);
		if (ft_strchr(buff, '\n') != NULL)
			break ;
	}
	if (nb_oct_read < BUFF_SIZE &&
			(ft_strlen((char *)this_file->STR_TMP) == LINE_END_READ))
		return (LINE_END_READ);
	if (!(cut_save_surplus(line, this_file)))
		return (LINE_ERROR_READ);
	return (LINE_IS_READ);
}
