/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmelen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 14:34:54 by thmelen           #+#    #+#             */
/*   Updated: 2018/04/25 14:34:56 by thmelen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/get_next_line.h"

int get_next_line(const int fd, char **line)
{
  static unsigned int start = 0;
  static char* content = read_file(fd);

  unsigned int end;
  end = start;

  while (end != '\n' && end != '\0')
    end++;
  if (end == '\n')
    *line = ft_strsub();
  start = end;
  return (1);
}
