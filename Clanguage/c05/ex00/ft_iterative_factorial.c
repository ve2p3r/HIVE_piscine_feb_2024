/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimioni <vsimioni@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 10:29:38 by vsimioni          #+#    #+#             */
/*   Updated: 2024/02/27 13:00:50 by vsimioni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fact;
	int	i;

	fact = 1;
	i = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (i <= nb)
	{
		fact = fact * i;
		i++;
	}
	return (fact);
}

/*#include <stdio.h>

int	main()
{
	int	number;

	number = 1;
	printf("%d", ft_iterative_factorial(number));
	return (0);
}*/
