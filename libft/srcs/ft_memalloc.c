/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmelen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/08 17:36:05 by thmelen           #+#    #+#             */
/*   Updated: 2018/04/10 20:30:21 by thmelen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *tab;

	if (!(tab = (void *)malloc(sizeof(tab) * size + 1)))
		return (NULL);
	ft_bzero(tab, size);
	return (tab);
}
