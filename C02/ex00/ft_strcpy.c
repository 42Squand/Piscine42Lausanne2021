/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmujic <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 11:20:02 by mmujic            #+#    #+#             */
/*   Updated: 2021/07/15 12:36:34 by mmujic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	*dest[index] = '\0'
	return	(dest);
}

int	main(void)
{
	char src[] = "salut";
	char dest[] = "lutsa";
	
	printf("%s\n", ft_strcpy(dest,src));
}
