/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimioni <vsimioni@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 20:14:04 by vsimioni          #+#    #+#             */
/*   Updated: 2024/02/22 10:39:53 by vsimioni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((i < n) && (src[i] != '\0'))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*our second while look i<n is in the case that n was bigger than the i of src 
 * and so we print '\0' extra into dest. 
 * but if src reaches it s end before n, then dest=src
 * and '\0' is implicitly in there*/
/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char source[] = "cute as fuck";
  	char destination[6];

 	printf("%s", ft_strncpy(destination, source, 4));
 	return 0;
}*/
