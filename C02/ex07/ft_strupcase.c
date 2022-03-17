/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmujic <mmujic@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 18:23:13 by mmujic            #+#    #+#             */
/*   Updated: 2021/07/15 18:35:59 by mmujic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{	
	int save;
	
	save = 0;
	while (str[save] != '\0')
	{
		if (str[save] >= 97 && str[save] <= 122)
		{
			str[save] = str[save] - 32;
		}
		save++;
	}
	return (str);
}

int	main(void)
{
	char str[] = "salut";
	
	ft_strupcase(str);
	printf("%s\n", str);
}	
