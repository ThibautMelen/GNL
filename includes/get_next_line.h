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

#ifndef GET_NEXT_LINE
# define GET_NEXT_LINE

# include "../libft/includes/libft.h"
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

int get_next_line(const int fd, char **line);

void		show_usage(const char *name);
void		exit_program(int status);
void	check_buff(const char *buff);
int			open_file(char *path);
char		*read_file(int fd);


#define BUFF_SIZE 32

# define NO_ERROR 0
# define OPEN_FILE_ERROR -1
# define READ_FILE_ERROR -2
# define BUFF_ERROR -3
# define CONTENT_ERROR -4
# define MALLOC_ERROR -42

#endif
