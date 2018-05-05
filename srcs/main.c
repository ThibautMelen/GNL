/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmelen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 14:33:42 by thmelen           #+#    #+#             */
/*   Updated: 2018/05/04 18:02:47 by thmelen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/get_next_line.h"


int main(int argc, char **argv)
{
	if (argc != 3)
		show_usage(argv[0]);

	char *line;
	line = NULL;
	int fd = open_file(argv[1]);
	int fd2 = open_file(argv[2]);
	// int ret = 0;
	int i;
	i = 0;
	// while (i < 10)
	// {
		get_next_line(fd, &line);
		ft_putstr(line);
		ft_putstr("\n");

		get_next_line(fd2, &line);
		ft_putstr(line);
		ft_putstr("\n");

		get_next_line(fd, &line);
		ft_putstr(line);
		ft_putstr("\n");
		//ft_strdel(&line);
		// i++;
	// }
	ft_putchar('\n');
	// while (1);
	return (1);
}
