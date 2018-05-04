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
	if (argc != 2)
		show_usage(argv[0]);

	char *line;
	int fd = open_file(argv[1]);

	int i;
	i = 0;
	while (i < 10)
	{
		get_next_line(fd, &line);
		ft_putstr(line);
		ft_putstr("\n");
		i++;
	}
	ft_putchar('\n');
	return (1);
}
