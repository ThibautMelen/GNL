/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmelen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/08 15:00:13 by thmelen           #+#    #+#             */
/*   Updated: 2018/04/08 17:06:28 by thmelen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	unsigned long long	val;
	int					i;
	int					pn;

	val = 0;
	i = 0;
	pn = 1;
	while (str[i] == '\n' || str[i] == '\t' || str[i] == '\r' || \
			str[i] == '\v' || str[i] == '\f' || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			pn = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		val = (val * 10) + (str[i] - '0');
		i++;
	}
	if (val > 9223372036854775807)
		return ((pn == 1) ? -1 : 0);
	return ((int)val * pn);
}
