/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimioni <vsimioni@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 09:26:00 by vsimioni          #+#    #+#             */
/*   Updated: 2024/02/20 09:26:10 by vsimioni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;
	int	y;

	x = *a / *b;
	y = *a % *b;
	*a = x;
	*b = y;
}

/* int	main()
 * { 
 * 		int a = 52;
 * 		int b = 7;
 *
 * 		ft_ultimate_div_mod(&a, &b);
 * 		printf("%d\n%d", a, b);
 * 		return 0;
 * }
 */
