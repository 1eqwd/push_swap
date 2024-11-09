/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumedai <sumedai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 20:39:47 by sumedai           #+#    #+#             */
/*   Updated: 2024/11/09 15:33:06 by sumedai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    ft_sort_three(t_dlst **a)
{
    if ((*a)->num == ft_max(*a))
    {
        ft_ra(a, 0);
        if ((*a)->next->num == ft_min(*a))
            ft_sa(a, 0);
    }
    else if ((*a)->num == ft_min(*a))
    {
       ft_rra(a, 0);
       ft_sa(a, 0);
    }
    else
    {
        if ((*a)->next->num == ft_min(*a))
            ft_sa(a, 0);
        else
            ft_rra(a, 0);
    }
}