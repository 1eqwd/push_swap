/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumedai <sumedai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 20:43:19 by sumedai           #+#    #+#             */
/*   Updated: 2024/11/09 15:29:23 by sumedai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_pb(t_dlst **a, t_dlst **b, int j)
{
	t_dlst	*tmp;

	if (!*a)
		return ;
	tmp = *b;
	*b = *a;
	*a = (*a)->next;
	(*b)->next = tmp;
	if (j == 0)
		write(1, "pb\n", 3);
}

void	ft_rb(t_dlst **b, int j)
{
	t_dlst	*tmp;

	if (!*b || !(*b)->next)
		return ;
	tmp = *b;
	*b = lstlast(*b);
	(*b)->next = tmp;
	*b = tmp->next;
	tmp->next = NULL;
	if (j == 0)
		write(1, "rb\n", 3);
}

void	ft_sb(t_dlst **b, int j)
{
	t_dlst	*tmp;

	if (!*b || !((*b)->next))
		return ;
	tmp = *b;
	*b = (*b)->next;
	tmp->next = (*b)->next;
	(*b)->next = tmp;
	if (j == 0)
		write(1, "sb\n", 3);
}

void	ft_rrb(t_dlst **b, int j)
{
	t_dlst	*tmp;
	int		i;

	if (!*b || !(*b)->next)
		return ;
	i = 0;
	tmp = *b;
	while ((*b)->next)
	{
		i++;
		*b = (*b)->next;
	}
	(*b)->next = tmp;
	while (i > 1)
	{
		tmp = tmp->next;
		i--;
	}
	tmp->next = NULL;
	if (j == 0)
		write(1, "rrb\n", 4);
}