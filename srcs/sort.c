/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumedai <sumedai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 20:39:13 by sumedai           #+#    #+#             */
/*   Updated: 2024/11/09 15:33:47 by sumedai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"


void ft_sort_till_b(t_dlst **a, t_dlst **b)
{
    int		i;
	t_dlst	*tmp;

	while (lstsize(*a) > 3 && !ft_sort_check(*a))
	{
		tmp = *a;
		i = ft_rotate_type_ab(*a, *b);
		while (i >= 0)
		{
			if (i == ft_case_rarb(*a, *b, tmp->num))
				i = ft_apply_rarb(a, b, tmp->num, 'a');
			else if (i == ft_case_rrarrb(*a, *b, tmp->num))
				i = ft_apply_rrarrb(a, b, tmp->num, 'a');
			else if (i == ft_case_rarrb(*a, *b, tmp->num))
				i = ft_apply_rarrb(a, b, tmp->num, 'a');
			else if (i == ft_case_rrarb(*a, *b, tmp->num))
				i = ft_apply_rrarb(a, b, tmp->num, 'a');
			else
				tmp = tmp->next;
		}
	}
}

t_dlst *ft_sort_b(t_dlst **a)
{
    t_dlst	*b;

	    b = NULL;
	    if (lstsize(*a) > 3 && !ft_sort_check(*a))
		    ft_pb(a, &b, 0);
	    if (lstsize(*a) > 3 && !ft_sort_check(*a))
		    ft_pb(a, &b, 0);
	    if (lstsize(*a) > 3 && !ft_sort_check(*a))
		    ft_sort_b_till_3(a, &b);
	    if (!ft_sort_check(*a))
		    ft_sort_three(a);
	    return (b);
}

t_dlst **ft_sort_a(t_dlst **a, t_dlst **b)
{
    int		i;
	t_dlst	*tmp;

	while (*b)
	{
		tmp = *b;
		i = ft_rotate_type_ba(*a, *b);
		while (i >= 0)
		{
			if (i == ft_case_rarb_a(*a, *b, tmp->num))
				i = ft_apply_rarb(a, b, tmp->num, 'b');
			else if (i == ft_case_rarrb_a(*a, *b, tmp->num))
				i = ft_apply_rarrb(a, b, tmp->num, 'b');
			else if (i == ft_case_rrarrb_a(*a, *b, tmp->nbr))
				i = ft_apply_rrarrb(a, b, tmp->num, 'b');
			else if (i == ft_case_rrarb_a(*a, *b, tmp->num))
				i = ft_apply_rrarb(a, b, tmp->num, 'b');
			else
				tmp = tmp->next;
		}
	}
	return (stack_a);
}

void ft_sort(t_dlst **a)
{
    t_dlst	*b;
	int		i;

	b = NULL;
	if (lstsize(*a) == 2)
		ft_sa(a, 0);
	else if (lstsize(*a) >= 3 && lstsize(*a) != 1)
	{
		b = ft_sort_b(a);
		a = ft_sort_a(a, &b);
		i = ft_find_index(*a, ft_min(*a));
		if (i < lstsize(*a) - i)
		{
			while ((*a)->nbr != ft_min(*a))
				ft_ra(a, 0);
		}
		else
		{
			while ((*a)->nbr != ft_min(*a))
				ft_rra(a, 0);
		}			
	}	
}