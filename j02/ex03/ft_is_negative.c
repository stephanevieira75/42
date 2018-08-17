/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stvieira <stvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 15:06:16 by stvieira          #+#    #+#             */
/*   Updated: 2018/08/08 20:34:10 by stvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		ft_putchar('N');
	}
	else
	{
		ft_putchar('P');
	}
}