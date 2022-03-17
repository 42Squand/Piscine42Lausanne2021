/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmujic <mmujic@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 15:53:38 by mmujic            #+#    #+#             */
/*   Updated: 2021/07/15 15:09:46 by mmujic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))
		{
			str++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

		

		


int	main(void)
{
	int x;
	char str[] = "";

	x = ft_str_is_alpha(&str[0]);
	printf("%d\n", x);
}
