/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumedai <sumedai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 20:40:57 by sumedai           #+#    #+#             */
/*   Updated: 2024/11/09 15:56:18 by sumedai          ###   ########.fr       */
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
    char *tmp;
    int i;
    int j;

    i = 0;
    while(str[i])
    {
        j = 0;
        while(str[i][j])
        {
            tmp = &str[i][j];
            j++;
            free(tmp);
        }
        free(&str[i][j]);
        i++;
    }
    str = NULL;
}