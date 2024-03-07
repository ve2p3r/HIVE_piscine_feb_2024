/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimioni <vsimioni@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 10:58:55 by vsimioni          #+#    #+#             */
/*   Updated: 2024/03/05 17:09:58 by vsimioni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	i = 0;
	range = ((int *)malloc(sizeof(int) * (max - min)));
	if (min >= max)
		return (0);
	while (min < max)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}

/*#include <stdio.h>

int	main ()
{
	int	min = 5;
	int	max = 10;
	int *result = ft_range(min, max);

	int i = 0;
	while (i < max - min)
	{
		printf("%d\t", result[i]);
		i++;
	}
	return (0);
}*/
