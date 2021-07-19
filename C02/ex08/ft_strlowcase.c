/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmujic <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 18:45:18 by mmujic            #+#    #+#             */
/*   Updated: 2021/07/15 18:49:47 by mmujic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int save;
	
	save =0;
	while (str[save] != '\0')
	{
		if (str[save] >= 65 && str[save] <= 90)
		{
			str[save] = str[save] + 32;
		}
		save++;
	}
	return (str);
}

int main(void)
{
	char str[] = "ALLO";

	ft_strlowcase(&str[0]);
	printf("%s\n", str);
}
