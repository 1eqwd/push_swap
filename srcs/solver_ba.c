/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver_ba.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumedai <sumedai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 20:45:51 by sumedai           #+#    #+#             */
/*   Updated: 2024/11/09 15:32:54 by sumedai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int ft_case_rarb_a(t_dlst *a, t_dlst *b, int c)
{
    int i;

    i = ft_find_place_a(a, c);
    if (i < ft_find_index(b, c))
        i = ft_find_index(b, c);
    return (i);
}

int ft_case_rrarrb_a(t_dlst *a, t_dlst *b, int c)
{
    int i;

    i = 0;
    if (ft_find_place_a(a, c))
        i = lstsize(a) - ft_find_place_a(a, c);
    if (i < lstsize(b) - ft_find_index(b, c) && ft_find_index(b, c))
        i = lstsize(a) - ft_find_index(b, c);
    return (i);
}

int ft_case_rarrb_a(t_dlst *a, t_dlst *b, int c)
{
    int i;

    i = 0;
    if (ft_find_index(b, c))
        i = lstsize(b) - ft_find_index(b, c);
    i = ft_find_place_a(a, c) + i;
    return (i);
}

int ft_case_rrarb_a(t_dlst *a, t_dlst *b, int c)
{
    int i;

    i = 0;
    if (ft_find_place_a(a, c))
        i = lstsize(a) - ft_find_index(a, c);
    i = ft_find_index(b, c) + i;
    return (i);
}