/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stvieira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 07:39:46 by stvieira          #+#    #+#             */
/*   Updated: 2018/08/20 12:09:16 by stvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (to_find[k])
		k++;
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
			j++;
		if (j == k)
			return (str + i);
		i++;
	}
	return (0);
}
