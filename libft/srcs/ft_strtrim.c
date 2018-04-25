/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmelen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/08 22:50:04 by thmelen           #+#    #+#             */
/*   Updated: 2018/04/10 20:48:29 by thmelen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int start;
	int len;

	if (s == NULL)
		return (NULL);
	start = 0;
	while (s[start] == '\n' || s[start] == '\t' || s[start] == ' ')
		start++;
	len = ft_strlen(s) - 1;
	while (s[len] == '\n' || s[len] == '\t' || s[len] == ' ')
		len--;
	len = len - start + 1;
	len = (len < 0) ? 0 : len;
	return (ft_strsub(s, start, len));
}
