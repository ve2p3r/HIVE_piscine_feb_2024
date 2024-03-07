/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimioni <vsimioni@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 15:24:28 by vsimioni          #+#    #+#             */
/*   Updated: 2024/02/28 08:48:40 by vsimioni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	answer;

	answer = 1;
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	while (power > 0)
	{
		answer = answer * nb;
		power--;
	}
	return (answer);
}
/* power--; is reducing power by one each time the loop 
 * starts again, this is to ensure power reaches 0
 * which is our base that will prevent the loop from 
 * going round infinitely.*/
/*#include <stdio.h>

int	main()
{
	int number;
	int math;

	number = 0;
	math = 0;
	printf("%d", ft_iterative_power(number, math));
	return (0);
}*/
