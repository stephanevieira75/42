/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stvieira <stvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 04:35:56 by stvieira          #+#    #+#             */
/*   Updated: 2018/08/08 21:25:39 by stvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_magic(char a, char b, char c)
{
	while (c <= '9')
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(c);
		if (a <= '6' && b <= '8' && c <= '9')
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		else
		{
			ft_putchar('\n');
		}
		c++;
	}
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0';
	while (a <= '9')
	{
		b = a + 1;
		while (b <= '9')
		{
			c = b + 1;
			ft_magic(a, b, c);
			b++;
		}
		a++;
	}
}
