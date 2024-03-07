/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimioni <vsimioni@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 09:59:03 by vsimioni          #+#    #+#             */
/*   Updated: 2024/02/28 13:11:19 by vsimioni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
		return ((ft_fibonacci(index - 1)) + (ft_fibonacci(index - 2)));
}
	/*FIRST DRAFT LOL
	 * int	term1;
	int	term2;

	term1 = 0;
	term2 = 1;
	if (index == 1)
	{
		return 1;
	}
	else if (index < 0)
	{
		return (-1);
	}
	while (index == 0)
		return (ft_fibonacci(term1) + ft_fibonacci(term2));*/

/*#include <stdio.h>

int	main()
{
	int	number;

	number = -7;
	printf("%d", ft_fibonacci(number));
	return 0;
}*/
