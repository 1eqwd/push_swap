/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumedai <sumedai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 20:26:02 by sumedai           #+#    #+#             */
/*   Updated: 2024/11/09 15:30:50 by sumedai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int ac, char **av)
{
	t_dlst	*a;

	a = init_stack(ac, av);
	if (!a || ft_dpl_check(a))
	{
		ft_free(&a);
		ft_error();
	}
	if (!ft_sort_check(a))
		ft_sort(&a);
	ft_free(&a);
	return (0);
}