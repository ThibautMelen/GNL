/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmelen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 15:26:11 by thmelen           #+#    #+#             */
/*   Updated: 2018/04/13 05:53:05 by thmelen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_strslct(char const *s, char c, int *start, int *end)
{
	while (s[*start] == c)
		(*start)++;
	*end = *start + 1;
	while (s[*end] != c && s[*end])
		(*end)++;
}

char			**ft_strsplit(char const *s, char c)
{
	char	**words;
	int		start;
	int		end;
	size_t	i;

	if (s == NULL)
		return (NULL);
	i = 0;
	start = 0;
	end = 0;
	if (!(words = malloc(sizeof(words) * ft_cntword(s, c) + 1)))
		return (NULL);
	while (i < ft_cntword(s, c))
	{
		ft_strslct(s, c, &start, &end);
		words[i] = ft_strsub(s, start, (end - start));
		start = end;
		i++;
	}
	words[i] = NULL;
	return (words);
}
