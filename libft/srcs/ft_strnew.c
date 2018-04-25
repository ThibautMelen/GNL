/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmelen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/08 18:25:57 by thmelen           #+#    #+#             */
/*   Updated: 2018/04/10 20:31:28 by thmelen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *dest;

	if (!(dest = (char *)malloc(sizeof(*dest) * size + 1)))
		return (NULL);
	ft_bzero(dest, size);
	dest[size] = '\0';
	return (dest);
}
