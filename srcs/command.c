/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumedai <sumedai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 20:43:27 by sumedai           #+#    #+#             */
/*   Updated: 2024/11/23 19:25:06 by sumedai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_ra(t_dlst **a, int j)
{
	t_dlst	*tmp;

	if (!*a || !(*a)->next)
		return ;
	tmp = *a;
	*a = lstlast(*a);
	(*a)->next = tmp;
	*a = tmp->next;
	tmp->next = NULL;
	if (j == 0)
		write(1, "ra\n", 3);
}

void	ft_sa(t_dlst **a, int j)
{
	t_dlst	*tmp;

	if (!*a || !((*a)->next))
		return ;
	tmp = *a;
	*a = (*a)->next;
	tmp->next = (*a)->next;
	(*a)->next = tmp;
	if (j == 0)
		write(1, "sa\n", 3);
}

void	ft_pa(t_dlst **a, t_dlst **b, int j)
{
	t_dlst	*tmp;

	if (!*b)
		return ;
	tmp = *a;
	*a = *b;
	*b = (*b)->next;
	(*a)->next = tmp;
	if (j == 0)
		write(1, "pa\n", 3);
}

void	ft_rra(t_dlst **a, int j)
{
	t_dlst	*tmp;
	int		i;

	if (!*a || !(*a)->next)
		return ;
	i = 0;
	tmp = *a;
	while ((*a)->next)
	{
		*a = (*a)->next;
		i++;
	}
	(*a)->next = tmp;
	while (i > 1)
	{
		tmp = tmp->next;
		i--;
	}
	tmp->next = NULL;
	if (j == 0)
		write(1, "rra\n", 4);
}

// int main(void)
// {
// 	t_dlst *lst = NULL;
// 	t_dlst *lst2 = newnode(3);
// 	t_dlst *lst3 = newnode(2);
// 	t_dlst *lst4 = newnode(4);
// 	addback(&lst, lst2);
// 	addback(&lst, lst3);
// 	addback(&lst, lst4);

// 	ft_sa(&lst, 0);
// 	while (lst)
// 	{
// 		printf("%d\n", lst->num);
// 		lst = lst->next;
// 	}
// 	return (0);
// }