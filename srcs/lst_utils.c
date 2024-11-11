/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumedai <sumedai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 20:43:34 by sumedai           #+#    #+#             */
/*   Updated: 2024/11/10 22:04:00 by sumedai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int lstsize(t_dlst *lst)
{
    int size;

    size = 0;
    while (lst)
    {
        size++;
        lst = lst->next;
    }
    return (size);
}

t_dlst *lstlast(t_dlst *lst)
{
    while (lst->next)
        lst = lst->next;
    return (lst);
}

int ft_min(t_dlst *lst)
{
    int min;

    min = lst->num;
    while (lst->next)
    {
        if (lst->num > lst->next->num)
            min = lst->next->num;
        lst = lst->next;
    }
    return (min);
}

int ft_max(t_dlst *lst)
{
    int max;

    max = lst->num;
    while (lst->next)
    {
        if (lst->num < lst->next->num)
            max = lst->next->num;
        lst = lst->next;
    }
    return (max);
}

// int main(int ac , char **av)
// {
//     t_dlst *a = init_stack(ac, av);
//     // while (a)
//     // {
//     //     printf("%d\n", a->num);
//     //     a = a->next;
//     // }
//     printf("%d : %d\n", ft_max(a), ft_min(a));
//     return (0);
// }