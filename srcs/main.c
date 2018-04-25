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
  int ret;
  char buf[BUFF_SIZE + 1];
  // const int fd = open("_test/42", O_RDWR | O_CREAT | O_APPEND, S_IRUSR | S_IWUSR);
  const int fd = open("_test/42", O_RDONLY);
  if (fd == -1)
  {
    ft_putstr("open() failed");
    return (1);
  }
  ft_putnbr(fd);
  ft_putstr("\n");


  ret = read(fd, buf, BUFF_SIZE);
  buf[ret] = '\0';
  ft_putnbr(ret);
  ft_putstr("\n");
  ft_putstr(buf);


  int i = 0;
  int i_octet = 0;
  char *oklm;

  while (buf[i])
  {
    if(buf[i] == '\n')
    {
      oklm = ft_strdup(ft_strsub(buf, i_octet, i));
      break ;
    }
    i++;
  }
  ft_putstr("\n\n");
  ft_putstr(oklm);
  ft_putstr("\n\n");
  // free(oklm);
  if (close(fd) == -1)
  {
    ft_putstr("close() failed");
    return (1);
  }
  ft_putnbr(fd);
  return (1);
}
