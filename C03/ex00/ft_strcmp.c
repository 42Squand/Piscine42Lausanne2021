/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmujic <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 14:22:01 by mmujic            #+#    #+#             */
/*   Updated: 2021/07/18 14:48:56 by mmujic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
	int index;
	
	index = 0;
	while (s1[index] != '\0' && s1[index] == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
int	main(void)
{
	char s1[] = "lausanne42";
	char s2[] = "lausanne";
	int ret;

	ret = ft_strcmp(s1, s2);
	printf("%d\n", ret);
}
