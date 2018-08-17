/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stvieira <stvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 13:04:36 by stvieira          #+#    #+#             */
/*   Updated: 2018/08/08 20:26:03 by stvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	char i;

	i = '0';
	while (i <= 57)
		ft_putchar(i++);
}

int		main(void)
{
	ft_print_numbers();
	return (0);
}
