/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmujic <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 11:20:02 by mmujic            #+#    #+#             */
/*   Updated: 2021/07/14 15:44:05 by mmujic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int index;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}

	*dest = '\0';
	return (dest);
}

int	main(void)
{
	char dest[] = "destination";
	char src[] = "test";

	printf("%s\n", dest);
	ft_strcpy(&dest[0], &src[0]);
	printf("%s\n", dest);
}
