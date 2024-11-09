/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumedai <sumedai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 20:44:26 by sumedai           #+#    #+#             */
/*   Updated: 2024/11/09 15:26:25 by sumedai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_apply_rarb(t_dlst **a, t_dlst **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->num != c && ft_find_place_b(*b, c) > 0)
			ft_rr(a, b, 0);
		while ((*a)->num != c)
			ft_ra(a, 0);
		while (ft_find_place_b(*b, c) > 0)
			ft_rb(b, 0);
		ft_pb(a, b, 0);
	}
	else
	{
		while ((*b)->num != c && ft_find_place_a(*a, c) > 0)
			ft_rr(a, b, 0);
		while ((*b)->num != c)
			ft_rb(b, 0);
		while (ft_find_place_a(*a, c) > 0)
			ft_ra(a, 0);
		ft_pa(a, b, 0);
	}
	return (-1);
}

int	ft_apply_rrarrb(t_dlst **a, t_dlst **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->num != c && ft_find_place_b(*b, c) > 0)
			ft_rrr(a, b, 0);
		while ((*a)->num != c)
			ft_rra(a, 0);
		while (ft_find_place_b(*b, c) > 0)
			ft_rrb(b, 0);
		ft_pb(a, b, 0);
	}
	else
	{
		while ((*b)->num != c && ft_find_place_a(*a, c) > 0)
			ft_rrr(a, b, 0);
		while ((*b)->num != c)
			ft_rrb(b, 0);
		while (ft_find_place_a(*a, c) > 0)
			ft_rra(a, 0);
		ft_pa(a, b, 0);
	}
	return (-1);
}

int	ft_apply_rrarb(t_dlst **a, t_dlst **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->num != c)
			ft_rra(a, 0);
		while (ft_find_place_b(*b, c) > 0)
			ft_rb(b, 0);
		ft_pb(a, b, 0);
	}
	else
	{
		while (ft_find_place_a(*a, c) > 0)
			ft_rra(a, 0);
		while ((*b)->num != c)
			ft_rb(b, 0);
		ft_pa(a, b, 0);
	}
	return (-1);
}

int	ft_apply_rarrb(t_dlst **a, t_dlst **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->num != c)
			ft_ra(a, 0);
		while (ft_find_place_b(*b, c) > 0)
			ft_rrb(b, 0);
		ft_pb(a, b, 0);
	}
	else
	{
		while (ft_find_place_a(*a, c) > 0)
			ft_ra(a, 0);
		while ((*b)->num != c)
			ft_rrb(b, 0);
		ft_pa(a, b, 0);
	}
	return (-1);
}