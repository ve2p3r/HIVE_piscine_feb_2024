/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimioni <vsimioni@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 12:17:33 by vsimioni          #+#    #+#             */
/*   Updated: 2024/02/26 12:06:04 by vsimioni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	short	parity;
	int		number;

	parity = 0;
	number = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		++str;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			parity++;
		++str;
	}
	while (*str >= 48 && *str <= 57)
	{
		number *= 10;
		number += *str - 48;
		++str;
	}
	if (!(parity % 2))
		return (number);
	return (-number);
}

/*short is an int of defined value between -32768 to 32768
 * that occupies only 2 bytes of data
 * whereas an int occupies 4 bytes.
 * parity checks if there is an odd or even number of '-' at the end.
 * int number is the final number returned at the end of the function.
 * our first cascade assignment which basically assigns the same value to two 
 * variables.
 * taking care of the white spaces found in man 3 isspace.
 * keeping track of the number of '-' so if there are '-' log them 
 * one by one into parity
 * then is the value pointed to by str
 * an integer char (a digit)?
 * so we multiply number which is initially
 * 0x10 and add it to *str -48 or -'0' to 
 * convert int number to char number. the multiplication
 * by 10 is just 
 * shifting us to the next index position and allowing
 * for concatenation of the
 * next char digit
 * last step check the parity that we kept track of 
 * by asking if the parity is % 2.
 * if you mod any even number, the remainder is 0 so - and - make +.*/

/*#include <stdio.h>
 * #include <stdlib.h>

int	main()
{
	char	*string = "    --+12389bitch3";
	printf("%d", ft_atoi(string));
	return (0);
}*/
