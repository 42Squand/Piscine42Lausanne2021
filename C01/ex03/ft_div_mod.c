/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmujic <mmujic@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 18:08:51 by mmujic            #+#    #+#             */
/*   Updated: 2021/07/12 19:18:11 by mmujic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main(void)
{
	int mod;
	int div;	
	int a;
	int b;
	
	a = 10;
	b = 2;

	ft_div_mod(a, b, &div, &mod);
	printf("div : %d, mod : %d", div, mod);

	return (0);
}
