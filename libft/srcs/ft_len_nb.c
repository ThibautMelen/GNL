/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_len_nb.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmelen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 01:25:02 by thmelen           #+#    #+#             */
/*   Updated: 2018/04/13 05:12:05 by thmelen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_len_nb(long long nb)
{
	int len_nb;

	len_nb = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		nb *= -1;
		len_nb++;
	}
	while (nb != 0)
	{
		nb /= 10;
		len_nb++;
	}
	return (len_nb);
}
