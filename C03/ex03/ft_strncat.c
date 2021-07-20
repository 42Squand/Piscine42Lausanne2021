/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmujic <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 17:03:50 by mmujic            #+#    #+#             */
/*   Updated: 2021/07/20 13:32:46 by mmujic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int		i;
	int		i2;
	unsigned int	numb;

	i = 0;
	i2 = 0;
	num = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[i2] != '\0' && numb < nb)
	{
		dest[i] = src[i2];
		i++;
		i2++;
		numb++;
	}
	dest[i] = '\0';
	return (dest);
}

int main(void)
{
	char dest[] = "salut";
	char src[] = "ca va";
	

	ft_strncat(dest, src, 20);
	printf("%s\n", dest);
}
