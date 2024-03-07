/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimioni <vsimioni@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 11:06:33 by vsimioni          #+#    #+#             */
/*   Updated: 2024/02/27 10:11:58 by vsimioni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar(nb % 10 + '0');
}

/*putchar to create our write() function because you can 
 * only display characters that are human-readable.
 * first step is to then make all the negative numbers appear neg.
 * next is checking if the int number exceeds 1 digit so we then
 * have to separate each digit to convert them one at a time /10.
 * then when we finally have all of the numbers separated we have to convert
 * the remainders 1 by one, convert them to char with '0' and then reconcatenate
 * them in the correct order*/

/*int	main(void)
{
	ft_putnbr(2147483647);
	write(1, "\n", 1);
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	ft_putnbr(10001);
	write(1, "\n", 1);
	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(50);
	write(1, "\n", 1);
	ft_putnbr(14345);
	write(1, "\n", 1);
	ft_putnbr(-14345);
	write(1, "\n", 1);
	ft_putnbr(980349572);
	write (1, "\n", 1);
	ft_putnbr(-980349572);
}*/
