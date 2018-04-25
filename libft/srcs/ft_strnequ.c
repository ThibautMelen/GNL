/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmelen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/08 21:17:54 by thmelen           #+#    #+#             */
/*   Updated: 2018/04/10 20:36:42 by thmelen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (n == 0)
		return (1);
	if (s1 == NULL && s2 == NULL)
		return (0);
	if ((s1 == NULL && s2 != NULL) || (s1 != NULL && s2 == NULL))
		return (1);
	return (ft_strncmp(s1, s2, n) ? FALSE : TRUE);
}
