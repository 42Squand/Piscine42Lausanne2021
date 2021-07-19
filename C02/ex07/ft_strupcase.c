/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmujic <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 18:23:13 by mmujic            #+#    #+#             */
/*   Updated: 2021/07/15 18:35:59 by mmujic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 97 && *str <= 122)
		{
			*str = *str - 32;
		}
		str++;
	}
	return (str);
}

int	main(void)
{
	char desti[] = "desti";
	char str[] = "salut";
	
	ft_strupcase(&str[0]);
	printf("%s\n", str);
}	

int main(void)
{
	char dest[] = "START";
	char str[] = "ALLO";

	ft_strlowcase(&str[0]);
	printf("%s\n", str);
}
