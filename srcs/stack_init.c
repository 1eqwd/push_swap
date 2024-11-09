/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumedai <sumedai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 20:35:56 by sumedai           #+#    #+#             */
/*   Updated: 2024/11/09 15:34:01 by sumedai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_dlst *init_stack(int ac, char **av)
{
    t_dlst *a;
    t_dlst *node;

    a = NULL;
    if (ac == 1)
        ft_error();
    av++;
    if (ac == 2)
        a = sub_init(av);
    else
    {
        while (ac > 1)
        {
            node = newnode(ft_atoi2(av));
            addback(a, node);
            av++;
            ac--;
        }
        }
    return (a);
}

t_dlst *sub_init(char *av)
{
    t_dlst *a;
    t_dlst *node;
    char **str;

    a = NULL;
    str = ft_split(av, ' ');
    while (str)
    {
        node = newnode(atoi2(str));
        addback(a, node);
        str++;
    }
    ft_strfree(str);
    free(str);
    return (a);
}