/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmelen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 17:50:41 by thmelen           #+#    #+#             */
/*   Updated: 2018/04/08 17:11:08 by thmelen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *dest;

	if (!(dest = (char *)malloc(sizeof(*dest) * ft_strlen(s1) + 1)))
		return (NULL);
	ft_strcpy(dest, s1);
	return (dest);
}
