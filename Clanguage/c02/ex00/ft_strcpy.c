/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimioni <vsimioni@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 14:41:44 by vsimioni          #+#    #+#             */
/*   Updated: 2024/02/22 08:26:04 by vsimioni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*#include <stdio.h>
 * #include <string.h>
 * int	main()
 * {
 * 		char source[] = "cute";
 * 		char destination[3];
 *		*ft_strcpy(destination, source);
 *		printf("%s", destination);
 *		return 0;
 * }*/
