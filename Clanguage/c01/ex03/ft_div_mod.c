/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimioni <vsimioni@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 14:35:20 by vsimioni          #+#    #+#             */
/*   Updated: 2024/02/18 15:15:10 by vsimioni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	x;
	int	y;

	x = a / b;
	y = a % b;
	*div = x;
	*mod = y;
}

/* int	main()
 * {
 * int	a = 10;
 * int	b =3;
 * int	div, mod;
 *
 * ft_div_mod(a, b, &div, &mod);
 *
 * printf("%d\n", div);
 * printf("%d", mod);
 *
 * return 0;
 * }*/
