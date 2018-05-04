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

#include "../includes/get_next_line.h"

static int		cut_save_surplus(t_gnl *this_file, char **line)
{
	int		i;
	int		oct_split;
	char	*tmp;

	i = 0;
	oct_split = 0;
	while ((this_file->str_tmp)[i])
	{
		if ((this_file->str_tmp)[i] == '\n')
			oct_split = i;
		i++;
	}
	if (!(*line = ft_strnew(oct_split)))
		return (LINE_END_READ);
	ft_strncpy(*line, this_file->str_tmp, oct_split);
	if (!(tmp = ft_strnew(i - oct_split)))
		return (LINE_END_READ);
	ft_strncpy(tmp, &(this_file->str_tmp)[oct_split + 1], i - oct_split);
	free(this_file->str_tmp);
	this_file->str_tmp = tmp;
	return (LINE_IS_READ);
}


static t_gnl	get_create_fd(t_list **save_list, const int fd)
{
	t_list	*actual_list;
	t_gnl this_file;

	actual_list = *save_list;
	while (actual_list != NULL)
	{
		if ((int)actual_list->FD == fd)
		{
			this_file.fd = (int)actual_list->FD;
			this_file.str_tmp = ft_strdup((char*)actual_list->content);
			this_file.nb_oct_read = 0;
			return (this_file);
		}
		actual_list = actual_list->next;
	}
	if (actual_list == NULL)
	{
		actual_list = ft_lstnew("\0", 1);
		actual_list->FD = fd;
		ft_lstadd(save_list, actual_list);
	}
	this_file.fd = (int)actual_list->FD;
	this_file.str_tmp = ft_strdup((char*)actual_list->content);
	this_file.nb_oct_read = 0;
	return (this_file);
}

int				get_next_line(const int fd, char **line)
{
	static t_list	*save_list;
	static t_gnl			this_file;
	char			buff[BUFF_SIZE + 1];
	char			*tmp;

	if ((BUFF_SIZE < 1 || line == NULL || fd < 0 || read(fd, buff, 0) < 0))
		return (LINE_ERROR_READ);
	this_file = get_create_fd(&save_list, fd);
	while ((this_file.nb_oct_read = read(fd, buff, BUFF_SIZE)) > LINE_END_READ)
	{
		buff[this_file.nb_oct_read] = '\0';
		tmp = this_file.str_tmp;
		if (!(this_file.str_tmp = ft_strjoin(tmp, buff)))
			return (LINE_ERROR_READ);
		free(tmp);
		if (ft_strchr(buff, '\n') != NULL)
			break ;
	}
	if (!(cut_save_surplus(&this_file, line)))
		return (LINE_ERROR_READ);
	save_list->content = (char *)this_file.str_tmp;
	return (LINE_IS_READ);
}
