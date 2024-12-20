/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cheapst_calculation.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumedai <sumedai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 20:40:15 by sumedai           #+#    #+#             */
/*   Updated: 2024/11/24 13:53:23 by sumedai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_rotate_type_ba(t_dlst *a, t_dlst *b)
{
	int		i;
	t_dlst	*tmp;

	tmp = b;
	i = ft_case_rrarrb_a(a, b, b->num);
	while (tmp)
	{
		if (i > ft_case_rarb_a(a, b, tmp->num))
			i = ft_case_rarb_a(a, b, tmp->num);
		if (i > ft_case_rrarrb_a(a, b, tmp->num))
			i = ft_case_rrarrb_a(a, b, tmp->num);
		if (i > ft_case_rarrb_a(a, b, tmp->num))
			i = ft_case_rarrb_a(a, b, tmp->num);
		if (i > ft_case_rrarb_a(a, b, tmp->num))
			i = ft_case_rrarb_a(a, b, tmp->num);
		tmp = tmp->next;
	}
	return (i);
}

int	ft_rotate_type_ab(t_dlst *a, t_dlst *b)
{
	int		i;
	t_dlst	*tmp;

	tmp = a;
	i = ft_case_rrarrb(a, b, a->num);
	while (tmp)
	{
		if (i > ft_case_rarb(a, b, tmp->num))
			i = ft_case_rarb(a, b, tmp->num);
		if (i > ft_case_rrarrb(a, b, tmp->num))
			i = ft_case_rrarrb(a, b, tmp->num);
		if (i > ft_case_rarrb(a, b, tmp->num))
			i = ft_case_rarrb(a, b, tmp->num);
		if (i > ft_case_rrarb(a, b, tmp->num))
			i = ft_case_rrarb(a, b, tmp->num);
		tmp = tmp->next;
	}
	return (i);
}
