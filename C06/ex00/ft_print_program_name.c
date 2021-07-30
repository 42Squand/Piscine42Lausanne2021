/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmujic <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 13:03:21 by mmujic            #+#    #+#             */
/*   Updated: 2021/07/28 15:49:50 by mmujic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_pustr(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		write(1, &str[index], 1);
		str++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc)
	{
		ft_pustr(argv[0]);
		write(1, "\n", 1);
	}
}
