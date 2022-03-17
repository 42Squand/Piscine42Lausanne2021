/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmujic <mmujic@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 10:26:39 by mmujic            #+#    #+#             */
/*   Updated: 2021/07/22 08:59:20 by mmujic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_calc_numb(int nb)
{
	int	numb;

	numb = 0;
	if (nb > 0)
	{
		numb = nb % 10;
		numb += 48;
		nb = nb / 10;
		ft_calc_numb(nb);
		write (1, &numb, 1);
	}
}

void	ft_putnbr(int nb)
{
	unsigned int	v;

	v = 0;
	if (nb == 0)
	{
		write (1, "0", 1);
	}
	else if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		write (1, "-", 1);
		v = (unsigned int)(-1 * nb);
		ft_calc_numb(v);
	}
	else
	{
		v = (unsigned int) nb;
		ft_calc_numb(v);
	}
}

int main(void)
{
	ft_putnbr(13456);
}
