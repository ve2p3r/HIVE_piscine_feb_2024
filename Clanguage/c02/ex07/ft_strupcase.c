/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimioni <vsimioni@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:36:02 by vsimioni          #+#    #+#             */
/*   Updated: 2024/02/22 11:25:33 by vsimioni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

/*shortening str[i] = str[i]-32 would be str[i] -= 32*/

/*#include <stdio.h>
 #include <string.h>
int	main()
{
	char string[] = "hello bitch";
	ft_strupcase(string);
	printf("%s", string);
	return (0);
}*/
