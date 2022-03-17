/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmujic <mmujic@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 13:29:14 by mmujic            #+#    #+#             */
/*   Updated: 2021/07/13 16:25:25 by mmujic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	charnum = 0;
	while ( *str != '\0')
	{
		str++;
		charnum++;
	}
	return (charnum);
}

int	main(void)
{
	int	charnum;
	char tab[] = "hello";
	charnum = ft_strlen(tab);
	printf("%d\n",charnum );
}
