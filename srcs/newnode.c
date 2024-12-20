/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newnode.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumedai <sumedai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 20:27:52 by sumedai           #+#    #+#             */
/*   Updated: 2024/11/24 13:56:49 by sumedai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_dlst	*newnode(int centent)
{
	t_dlst	*new_node;

	new_node = malloc(sizeof(t_dlst));
	if (!new_node)
		return (NULL);
	new_node->num = centent;
	new_node->next = NULL;
	return (new_node);
}
