/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmujic <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 17:50:04 by mmujic            #+#    #+#             */
/*   Updated: 2021/07/11 19:07:08 by mmujic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_HandT(int x, int y);
void	ft_middle(int x, int y);
void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	reset;

	if (x > 0 && y > 0)
	{
		reset = x;
		ft_HandT(x, y);
		if (y > 1)
		{
			ft_middle(x, y);
			write(1, "\n", 1);
			ft_HandT(x, y);
		}
		write(1, "\n", 1);
	}
}

void	ft_HandT(int x, int y)
{
	int	reset;

	reset = x;
	while (x > 0)
	{
		if (x == reset)
			ft_putchar('A');
		else if (x == 1)
			ft_putchar('C');
		else
			ft_putchar('B');
		x--;
	}
}

void	ft_middle(int x, int y)
{
	int		reset;
	char	c;

	c = 'B';
	reset = x;
	while (y > 2)
	{
		write(1, "\nB", 2);
		while (x > 2)
		{
			write(1, " ", 1);
			x--;
		}
		x = reset;
		if (x > 1)
		{
			write(1, &c, 1);
		}
		y--;
	}
}
