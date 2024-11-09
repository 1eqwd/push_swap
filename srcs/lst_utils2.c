/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumedai <sumedai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 20:43:37 by sumedai           #+#    #+#             */
/*   Updated: 2024/11/09 15:30:38 by sumedai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int ft_find_index(t_dlst *lst, int nbr)
{
    int index;

	index = 0;
	while (lst->num != nbr)
	{
		index++;
		lst = lst->num;
	}
	return (index);
}

int ft_find_place_b(t_dlst *b ,int nbr)
{
    int		i;
	t_dlst	*tmp;

	i = 1;
	if (nbr > b->num && nbr < lstlast(b)->num)
		i = 0;
	else if (nbr > ft_max(b) || nbr < ft_min(b))
		i = ft_find_index(b, ft_max(b));
	else
	{
		tmp = b->next;
		while (b->num < nbr || tmp->num > nbr)
		{
			b = b->next;
			tmp = b->next;
			i++;
		}
	}
	return (i);
}

int	ft_find_place_a(t_dlst *a, int nbr)
{
    int		i;
	t_dlst	*tmp;

	i = 1;
	if (nbr < a->num && nbr > lstlast(a)->num)
		i = 0;
	else if (nbr > ft_max(a) || nbr < ft_min(a))
		i = ft_find_index(a, ft_min(a));
	else
	{
		tmp = a->next;
		while (a->num > nbr || tmp->num < nbr)
		{
			a = a->next;
			tmp = a->next;
			i++;
		}
	}
	return (i);
}