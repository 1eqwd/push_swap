/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumedai <sumedai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 20:40:57 by sumedai           #+#    #+#             */
/*   Updated: 2024/11/21 17:27:08 by sumedai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void ft_free(t_dlst **lst)
{
    t_dlst *tmp;
    while (*lst)
    {
        tmp = (*lst)->next;
        free(*lst);
        *lst = tmp;
    }
}

void ft_strfree(char **str)
{
    int i;

    i = 0;
    if (!str)
        return;
    while(str[i])
    {
        
        free(str[i]);
        i++;
    }
    free(str);
}