/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmelen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 21:45:10 by thmelen           #+#    #+#             */
/*   Updated: 2018/04/13 05:11:39 by thmelen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *s)
{
	size_t	i;
	size_t	len;
	char	tmp;
	char	*dest;

	i = 0;
	len = ft_strlen(s) - 1;
	dest = ft_strdup(s);
	while (i < len)
	{
		tmp = dest[i];
		dest[i] = dest[len];
		dest[len] = tmp;
		i++;
		len--;
	}
	return (dest);
}
