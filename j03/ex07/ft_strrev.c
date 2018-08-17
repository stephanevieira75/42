/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stvieira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 17:51:46 by stvieira          #+#    #+#             */
/*   Updated: 2018/08/15 19:40:36 by stvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		a;
	int		b;
	char	tmp_c;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	b -= 1;
	while (b < a)
	{
		tmp_c = str[a];
		str[a] = str[b];
		str[b] = tmp_c;
		b++ && a--;
	}
	return (str);
}