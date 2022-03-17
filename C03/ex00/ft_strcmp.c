/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmujic <mmujic@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 14:22:01 by mmujic            #+#    #+#             */
/*   Updated: 2021/07/18 14:48:56 by mmujic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
	int v1;
	int v2;
	int numb;
	
	v1 = 0;
	v2 = 0;
	numb = 0;
	while (s1[v1] != '\0' && s1[v1] == s2[v2])
	{
		v1++;
		v2++;
		numb++;
	}
	return (s1[v1] - s2[v2]);
}

int	main(void)
{
	char s1[] = "lausanne42";
	char s2[] = "lausanne";
	int ret;

	ret = ft_strcmp(s1, s2);
	printf("%d\n", ret);
}
