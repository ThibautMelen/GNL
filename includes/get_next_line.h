/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmelen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 14:35:03 by thmelen           #+#    #+#             */
/*   Updated: 2018/04/25 14:35:05 by thmelen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "../libft/includes/libft.h"
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

int get_next_line(const int fd, char **line);

# define BUFF_SIZE 32
# define FD content_size
# define STR_TMP content
# define TO_SPLIT '\n'
# define LINE_IS_READ 1
# define LINE_END_READ 0
# define LINE_ERROR_READ -1

//A SUPPRIMER (IT'S FILE)
void		show_usage(const char *name);
void		exit_program(int status);
void	check_buff(const char *buff);
int			open_file(char *path);
char		*read_file(int fd);
# define NO_ERROR 0
# define OPEN_FILE_ERROR -5
# define READ_FILE_ERROR -6
# define BUFF_ERROR -7
# define CONTENT_ERROR -8
# define MALLOC_ERROR -42

#endif
