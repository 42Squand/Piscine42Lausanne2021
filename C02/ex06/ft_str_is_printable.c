/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmujic <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 18:01:10 by mmujic            #+#    #+#             */
/*   Updated: 2021/07/15 18:08:01 by mmujic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str >= '32' && *str <= '127' )
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
	int sc;
	char str[] = " ! ~";

	sc = ft_str_is_printable(&str[0]);
	printf("%d\n", sc);
}
