/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmelen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 00:13:38 by thmelen           #+#    #+#             */
/*   Updated: 2018/04/13 05:14:16 by thmelen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *new_element;

	if (!(new_element = (t_list *)malloc(sizeof(*new_element))))
		return (NULL);
	if (content == NULL)
	{
		new_element->content = NULL;
		new_element->content_size = 0;
	}
	else
	{
		if (!(new_element->content = (void *)malloc(sizeof(void) * \
		content_size)))
			return (NULL);
		new_element->content = ft_memcpy(new_element->content, \
		content, content_size);
		new_element->content_size = content_size;
	}
	new_element->next = NULL;
	return (new_element);
}
