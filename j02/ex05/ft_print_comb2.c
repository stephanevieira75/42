/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stvieira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 00:30:05 by stvieira          #+#    #+#             */
/*   Updated: 2018/08/09 00:40:15 by stvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_magic_box(int nb)
{
	int a;
	int b;

	if (nb > 9)
	{
		a = nb / 10;
		b = nb % 10;
		ft_putchar(a + 48);
		ft_putchar(b + 48);
	}
	else
	{
		ft_putchar('0');
		ft_putchar(nb + 48);
	}
}

void	ft_print_comb2(void)
{
	int k;
	int l;

	k = 0;
	while (k <= 99)
	{
		l = k + 1;
		while (l <= 99)
		{
			ft_magic_box(k);
			ft_putchar(' ');
			ft_magic_box(l);
			if (k <= 97 || l <= 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			l++;
		}
		k++;
	}
}
