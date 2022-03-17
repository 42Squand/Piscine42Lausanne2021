/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmujic <mmujic@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 13:56:41 by mmujic            #+#    #+#             */
/*   Updated: 2021/07/28 15:53:15 by mmujic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	i2;

	i = 1;
	while (i < argc)
	{
		i2 = 0;
		while (argv[i][i2] != '\0')
		{
			ft_putchar(argv[i][i2]);
			i2++;
		}	
		ft_putchar('\n');
		i++;
	}
}
