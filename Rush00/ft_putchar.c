/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmujic <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 12:33:10 by mmujic            #+#    #+#             */
/*   Updated: 2021/07/10 16:45:16 by mmujic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchard(char c);
{
	write(1, &c, 1);
}
