/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmelen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 14:33:42 by thmelen           #+#    #+#             */
/*   Updated: 2018/04/25 17:24:35 by thmelen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/get_next_line.h"

int main(void)
{
  int fd;
  int ret;
  char buf[BUFF_SIZE + 1];

  // fd = open("_test/42", O_RDWR | O_CREAT | O_APPEND, S_IRUSR | S_IWUSR);
  fd = open("_test/42", O_RDONLY);
  if (fd == -1)
  {
    ft_putstr("open() failed");
    return (1);
  }
  ft_putstr_fd("wertui", fd);
  ret = read(fd, buf, BUFF_SIZE);
  buf[ret] = '\0';
  ft_putnbr(ret);
  ft_putstr("\n");
  ft_putstr(buf);
  if (close(fd) == -1)
  {
    ft_putstr("close() failed");
    return (1);
  }
  ft_putnbr(fd);
  ft_putstr("\nnike tes morts");
  return (1);
}
