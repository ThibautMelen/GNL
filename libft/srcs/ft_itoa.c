/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmelen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 19:10:54 by thmelen           #+#    #+#             */
/*   Updated: 2018/04/10 21:08:36 by thmelen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_itoa(int nb)
{
	long long	number;
	char		*dest;
	int			i;

	number = (long long)nb;
	i = 0;
	if (!(dest = ft_strnew(ft_len_nb(number))))
		return (NULL);
	if (number < 0)
		number *= -1;
	while (number != 0 || i == 0)
	{
		dest[i] = (number % 10) + '0';
		number /= 10;
		i++;
	}
	if (nb < 0)
		dest[i++] = '-';
	dest[i] = '\0';
	return (ft_strrev(dest));
}
