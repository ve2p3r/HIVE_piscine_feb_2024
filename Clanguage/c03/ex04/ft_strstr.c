/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimioni <vsimioni@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 18:52:05 by vsimioni          #+#    #+#             */
/*   Updated: 2024/02/22 15:48:04 by vsimioni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		while ((to_find != '\0') && (str[i + j] == to_find[j]))
		{
			j++;
		}
		if (to_find[j] == '\0')
		{
			return (&str[i]);
		}
		j = 0;
		i++;
	}
	return ((void *) 0);
}

/*str[i] == to_find[j] for the example where str is SWEATER
 * and to_find is EAT, this simply means that
 * str[2] = E and to_find[0] = E, it s not that the indexes
 * necessarily match. NOT to confuse with the following while 
 * loop that says str[i+j] == to_find[j] which just means
 * that we re looking at the specific index position match.
 * the reason why we have to return j=0 if the other characters don t
 * match in str is because we naturally want to start from the first 0
 * index of j to start our search for the whole word in to_find.
 * return ((void*) 0) is the POINTER TO NUL, because our funtion 
 * ft_strstr is a pointer to thos strings*/

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	haystack[10] = "sweater";
	char	needle[10] = "fuckyou";

	printf("%s", ft_strstr(haystack, needle));
	return (0);
}*/
