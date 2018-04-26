/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmelen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/26 15:32:15 by thmelen           #+#    #+#             */
/*   Updated: 2018/04/26 15:32:17 by thmelen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/get_next_line.h"

void		show_usage(const char *name)
{
	ft_putstr("usage: ");
	ft_putstr(name);
	ft_putendl(" {file}");
	exit_program(NO_ERROR);
}

void		exit_program(int status)
{
	if (status < 0)
	{
		ft_putstr("error (");
		ft_putnbr(status);
		ft_putchar(')');
		ft_putchar('\n');
	}
	exit(status);
}

int			open_file(char *path)
{
	int fd;

	fd = open(path, O_RDONLY);
	if (fd == -1)
		exit_program(OPEN_FILE_ERROR);
	return (fd);
}

char		*read_file(int fd)
{
	char	*content;
	char	*buff;
	char	*tmp;
  int		ret;

  if (!(buff = malloc(sizeof(char *) * (BUFF_SIZE + 1))))
    exit_program(MALLOC_ERROR);
	if (!(content = ft_strnew(1)))
		exit_program(MALLOC_ERROR);
	while ((ret = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[ret] = '\0';
		tmp = content;
		if (!(content = ft_strjoin(tmp, buff)))
			exit_program(MALLOC_ERROR);
		free(tmp);
	}
	if (ret == -1)
		exit_program(READ_FILE_ERROR);
	return (content);
}
