/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmujic <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 15:05:54 by mmujic            #+#    #+#             */
/*   Updated: 2021/07/18 16:08:37 by mmujic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int		index;
	unsigned int	numb;
	
	index = 0;
	numb = 1;
	if
	{
		return (0);
	}
	while (s1[index] != '\0' && s2[index] != '\0' && numb < n)
	{
		numb++;
		index++;
	}
}

int	main(void)
{
	char s1[] = "lau42sane";
	char s2[] = "lau42sanne";
	int ret;

	ret = ft_strncmp(s1, s2, 8);
	printf("%d\n", ret);
}
