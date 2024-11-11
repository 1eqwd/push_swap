/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver_ab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumedai <sumedai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 20:45:56 by sumedai           #+#    #+#             */
/*   Updated: 2024/11/09 16:02:00 by sumedai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int ft_case_rarb(t_dlst *a, t_dlst *b, int c)
{
    int i;

    i = ft_find_place_b(b, c);
    if (i < ft_find_index(a, c))
        i = ft_find_index(a, c);
    return (i);
}


int ft_case_rrarrb(t_dlst *a, t_dlst *b, int c)
{
    int i;

    i = 0;
    if (ft_find_place_b(b, c))
        i = lstsize(b) - ft_find_place_b(b, c);
    if (i < lstsize(a) - ft_find_index(a, c) && ft_find_index(a, c))
        i = lstsize(a) - ft_find_index(a, c);
    return (i);
}

int ft_case_rarrb(t_dlst *a, t_dlst *b, int c)
{
    int i;

    i = 0;
    if (ft_find_place_b(b, c))
        i = lstsize(b) - ft_find_place_b(b, c);
    i = ft_find_index(a,c) + i;
    return (i);
}

int ft_case_rrarb(t_dlst *a, t_dlst *b, int c)
{
    int i;

    i = 0;
    if (ft_find_index(a, c))
        i = lstsize(a) - ft_find_index(a, c);
    i = ft_find_place_b(b, c) + i;
    return (i);
}