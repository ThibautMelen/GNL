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

typedef	struct		s_gnl
{
	int			fd;
  char *str_tmp;
  int nb_oct_read;
}					t_gnl;

int get_next_line(const int fd, char **line);

# define BUFF_SIZE 32
# define FD content_size

#define LINE_IS_READ 1
#define LINE_END_READ 0
#define LINE_ERROR_READ -1

#endif


//A SUPPRIMER (IT'S FILE)
void		show_usage(const char *name);
void		exit_program(int status);
void	check_buff(const char *buff);
int			open_file(char *path);
char		*read_file(int fd);
