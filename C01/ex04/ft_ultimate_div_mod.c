/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmujic <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 13:29:14 by mmujic            #+#    #+#             */
/*   Updated: 2021/07/13 16:25:25 by mmujic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void 	ft_ultimate_div_mod(int *a, int *b)
{
	*a = *a / *b;
	*b = *a % *b;
}

int	main(void)
{
	int	a;
	int	b;
	
	a = 10;
	b = 2;

	ft_ultimate_div_mod( &a, &b);
	printf("a : %d, b : %d", a, b);
	
	return (0);
}
