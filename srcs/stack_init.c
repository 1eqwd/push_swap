/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumedai <sumedai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 20:35:56 by sumedai           #+#    #+#             */
/*   Updated: 2024/11/24 14:42:56 by sumedai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_atoi2(const char *str)
{
	int		i;
	int		power;
	long	result;

	i = 0;
	power = 1;
	result = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			power *= -1;
	}
	while (str[i] >= '0' && '9' >= str[i])
	{
		result = result * 10 + (str[i++] - '0');
		if ((result * power > INT_MAX) || (result * power < INT_MIN))
			ft_error();
	}
	if (!(str[i] >= '0' && '9' >= str[i]) && str[i] != '\0')
		ft_error();
	return ((int)result * power);
}

t_dlst	*sub_init(char *av)
{
	t_dlst	*a;
	t_dlst	*node;
	char	**str;
	int		i;

	a = NULL;
	str = ft_split(av, ' ');
	i = 0;
	while (str[i])
	{
		node = newnode(ft_atoi2(str[i]));
		addback(&a, node);
		i++;
	}
	ft_strfree(str);
	return (a);
}

t_dlst	*init_stack(int ac, char **av)
{
	t_dlst	*a;
	t_dlst	*node;

	a = NULL;
	if (ac == 1)
		ft_error();
	av++;
	if (ac == 2)
		a = sub_init(*av);
	else
	{
		while (ac > 1)
		{
			node = newnode(ft_atoi2(*av));
			addback(&a, node);
			av++;
			ac--;
		}
	}
	return (a);
}
