/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmujic <mmujic@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 10:01:58 by mmujic            #+#    #+#             */
/*   Updated: 2021/07/12 09:47:18 by mmujic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb(void)
{
	char	c;
	char	d;
	char	u;

	c = '0' - 1;
	while (c++ <= '6')
	{
		d = c;
		while (d++ <= '7')
		{
			u = d;
			while (u++ <= '8')
			{
				write(1, &c, 1);
				write(1, &d, 1);
				write(1, &u, 1);
				if (c < '7')
				{
					write(1, ", ", 2);
				}
			}
		}
	}
}

int	main(void)
{
	ft_print_comb();
}
