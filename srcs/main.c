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

int main(int argc, char **argv)
{
  // const int fd = open("_test/42", O_RDWR | O_CREAT | O_APPEND, S_IRUSR | S_IWUSR);

  // char	*content;
  if (argc != 2)
    show_usage(argv[0]);
  
  char *line;
  const int fd = (const int)open_file(argv[1]);

  get_next_line(fd, &line);
  ft_putstr(line);
	return (NO_ERROR);
}
