/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimioni <vsimioni@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:15:01 by vsimioni          #+#    #+#             */
/*   Updated: 2024/02/28 15:03:06 by vsimioni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	x;

	x = 0;
	while (x < nb && x <= 46341)
	{
		if (x * x == nb)
		{
			return (x);
		}
		x++;
	}
	return (0);
}
/*46341 is the square root of the highest int range number
 * that we saw in putnbr ex02 in c04*/
/*#include <stdio.h>

int	main()
{
	int	number;

	number = 36;
	printf("%d", ft_sqrt(number));
	return (0);
}*/
