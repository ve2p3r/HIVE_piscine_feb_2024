/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimioni <vsimioni@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 11:59:10 by vsimioni          #+#    #+#             */
/*   Updated: 2024/02/27 15:23:27 by vsimioni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 0 || nb == 1)
	{
		return (1);
	}
	return (nb * ft_recursive_factorial(nb -1));
}
/*when we feed it 4 in main: 4 is not negative, 0, nor 1 so it 
 * goes straight to the
 * returns (4)* the same function -1 so (4)*(3)*(2)*,
 * building a stack of commands
 * until it hits (1) and then it back tracks them (1)*(2)*(3)*(4)
#include <stdio.h>

int	main()
{
	int	number;

	number = 4;
	printf("%d", ft_recursive_factorial(number));
	return (0);
}*/
