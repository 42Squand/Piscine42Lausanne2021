/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmujic <mmujic@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 18:53:57 by mmujic            #+#    #+#             */
/*   Updated: 2021/07/12 09:37:27 by mmujic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	alphaR;

	alphaR = 'z';
	while (alphaR >= 'a')
	{
		write(1, &alphaR, 1);
		alphaR--;
	}
}

int	main(void)
{
	ft_print_reverse_alphabet();
}
