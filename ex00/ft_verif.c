/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verif.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stvieira <stvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 19:45:53 by stvieira          #+#    #+#             */
/*   Updated: 2018/08/12 14:43:01 by stvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_verif(int grille[9][9], int verif[9][9])
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (verif[i][j] == 0)
				if (grille[i][j] == 0)
				{
					write(2, "Error\n", 6);
					return (0);
				}
			j++;
		}
		i++;
	}
	return (1);
}

int		ft_verif_3(int grille[9][9], char *sud[9], int i, int j)
{
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (sud[i][j] > '0' && sud[i][j] <= '9')
				grille[i][j] = sud[i][j] - 48;
			else if (sud[i][j] == '.')
				grille[i][j] = 0;
			else
			{
				write(1, "Error\n", 6);
				return (0);
			}
			j++;
		}
		if (sud[i][j])
		{
			write(1, "Error\n", 6);
			return (0);
		}
		i++;
	}
	return (0);
}

int		ft_verif_2(int grille[9][9], char *sud[9])
{
	int i;
	int j;

	j = 0;
	i = 0;
	ft_verif_3(grille, sud, i, j);
	return (1);
}

void	ft_verif_4(int verif[9][9], int grille[9][9])
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			verif[i][j] = grille[i][j];
			j++;
		}
		i++;
	}
}

int		ft_ligne(int k, int grille[9][9], int i)
{
	int j;

	j = -1;
	while (++j < 9)
		if (grille[i][j] == k)
			return (0);
	return (1);
}
