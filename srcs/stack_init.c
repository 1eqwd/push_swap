/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumedai <sumedai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 20:35:56 by sumedai           #+#    #+#             */
/*   Updated: 2024/11/11 20:01:34 by sumedai          ###   ########.fr       */
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
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			power = -1;
	}
    if (str[i] == '-' || str[i] == '+')
        ft_error();
	while (str[i] >= '0' && '9' >= str[i])
	{
		if (result * power > (LONG_MAX - (str[i] - '0')) / 10)
			ft_error();
		if (result * power < (LONG_MIN + (str[i] - '0')) / 10)
			ft_error();
		result = result * 10 + (str[i++] - '0');
	}
	return ((int)result * power);
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
        node = newnode(ft_atoi2(*str));
        addback(&a, node);
        str++;
    }
    ft_strfree(str);
    free(str);
    return (a);
}

t_dlst *init_stack(int ac, char **av) /*ok*/
{
    t_dlst *a;
    t_dlst *node;

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


// int main(int ac, char **av)
// {
//     t_dlst *a = init_stack(ac, av);

//     while (a)
//     {
//         printf("%d\n", a->num);
//         a = a->next;
//     }
//     return (0);
// }