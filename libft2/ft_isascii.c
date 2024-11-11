/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumedai <sumedai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 10:43:43 by sumedai           #+#    #+#             */
/*   Updated: 2024/09/05 15:01:07 by sumedai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (127 >= c && c >= 0)
		return (1);
	else
		return (0);
}
/*#include <ctype.h>
#include <stdio.h>

int	main(void)
{
    printf("%d\n",isascii('\n'));
    printf("%d\n", ft_isascii('\n'));
    return(0);
}*/
