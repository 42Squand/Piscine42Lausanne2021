/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmujic <mmujic@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 10:14:39 by mmujic            #+#    #+#             */
/*   Updated: 2021/07/29 10:53:59 by mmujic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	numb;

	if (nb < 0)
	{
		return (0);
	}
	else
	{
		numb = 1;
		while (nb > 0)
		{
			numb = nb * numb;
			nb -= 1;
		}
	}
	return (numb);
}
