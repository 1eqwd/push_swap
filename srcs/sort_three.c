/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumedai <sumedai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 20:39:47 by sumedai           #+#    #+#             */
/*   Updated: 2024/11/24 14:00:21 by sumedai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_sort_three(t_dlst **a)
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

// int main(void)
// {
//     t_dlst *lst = NULL;
//     t_dlst *lst2 = newnode(1);
//     t_dlst *lst3 = newnode(2);
//     t_dlst *lst4 = newnode(0);
//     addback(&lst, lst2);
//     addback(&lst, lst3);
//     addback(&lst, lst4);
//     ft_sort_three(&lst);
//     while(lst)
//     {
//         printf("%d\n", lst->num);
//         lst = lst->next;
//     }
//     return (0);
// }