/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesimkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 13:50:20 by mesimkha          #+#    #+#             */
/*   Updated: 2018/08/11 12:12:12 by mesimkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			ft_putchar(2 + '0');
			nb = -147483648;
		}
		nb = -1 * nb;
		ft_putnbr(nb);
	}
	else
	{
		if (nb < 10)
			if (nb == 0)
				ft_putchar('0');
			else
				ft_putchar(nb + '0');
		else
		{
			ft_putnbr(nb / 10);
			ft_putchar(nb % 10 + '0');
		}
	}
}
