/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmelen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 04:16:40 by thmelen           #+#    #+#             */
/*   Updated: 2018/04/13 05:13:33 by thmelen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *actual_list;

	actual_list = *begin_list;
	while (actual_list)
	{
		free(actual_list);
		actual_list = actual_list->next;
	}
	*begin_list = NULL;
	return ;
}
