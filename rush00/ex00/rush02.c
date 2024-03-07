/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimioni <vsimioni@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 11:02:28 by vsimioni          #+#    #+#             */
/*   Updated: 2024/02/17 20:18:50 by vsimioni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush02(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			if ((i == 0 && j == 0) || (i == 0 && j == x - 1))
				ft_putchar('A');
			else if ((i == y - 1 && j == 0) || (i == y - 1 && j == x - 1))
				ft_putchar('C');
			else if ((i == 0 || i == y - 1 || j == 0 || j == x - 1))
				ft_putchar('B');
			else
				ft_putchar(' ');
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
