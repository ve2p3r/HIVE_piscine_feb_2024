/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimioni <vsimioni@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 08:54:33 by vsimioni          #+#    #+#             */
/*   Updated: 2024/02/28 09:57:21 by vsimioni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power > 0)
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	else if (power == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/*recurring problem with the understanding of if, else if and else
 * conditionals.*/

/*#include <stdio.h>

int	main()
{
	int	number;
	int	pow;

	number = -8;
	pow = 3;
	printf("%d", ft_recursive_power(number, pow));
	return (0);
}*/
