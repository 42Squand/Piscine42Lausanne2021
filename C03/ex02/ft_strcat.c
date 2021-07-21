/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmujic <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 09:59:45 by mmujic            #+#    #+#             */
/*   Updated: 2021/07/19 16:37:05 by mmujic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int i2;
	
	i = 0;
	i2 = 0;
	while(dest[i] != '\0')
	{
		i++;
	}
	while(src[i2] != '\0')
	{
		dest[i] = src[i2];
		i++;
		i2++;
	}
	dest[i] = '\0';
	return (dest);
}

int main(void)
{
	char dest[] = "salut";
	char src[] = "ca va";

	ft_strcat(dest, src);
	printf("%s\n", dest);
}
