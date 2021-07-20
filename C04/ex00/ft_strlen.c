/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmujic <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 16:07:12 by mmujic            #+#    #+#             */
/*   Updated: 2021/07/20 16:19:03 by mmujic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int charnum;
	
	charnum = 0;
	while (*str != '\0')
	{
		str++;
		charnum++;
	}
	return (charnum);
}

int	main(void)
{
	char str[] = "salut";
	int	charnum;

	charnum = ft_strlen(str);
	printf("%d\n", charnum);
}
