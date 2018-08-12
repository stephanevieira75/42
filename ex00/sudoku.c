/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stvieira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 14:56:00 by stvieira          #+#    #+#             */
/*   Updated: 2018/08/12 14:56:15 by stvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str);

void	ft_putnbr(int nb);

int		ft_verif(int grille[9][9], int verif[9][9]);

int		ft_verif_2(int grille[9][9], char *sud[9]);

int		ft_ligne(int k, int grille[9][9], int i);

void	ft_verif_4(int verif[9][9], int grille[9][9]);

void	ft_print(int grille[9][9])
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			ft_putnbr(grille[i][j]);
			if (j != 8)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int		ft_colonne(int k, int grille[9][9], int j)
{
	int i;

	i = -1;
	while (++i < 9)
		if (grille[i][j] == k)
			return (0);
	return (1);
}

int		ft_bloc(int k, int grille[9][9], int i, int j)
{
	int i2;
	int j2;

	i2 = i - (i % 3);
	j2 = j - (j % 3);
	i = i2;
	while (i < i2 + 3)
	{
		j = j2;
		while (j < j2 + 3)
		{
			if (grille[i][j] == k)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		ft_valide(int grille[9][9], int position)
{
	int i;
	int j;
	int k;

	if (position == 9 * 9)
		return (1);
	i = position / 9;
	j = position % 9;
	if (grille[i][j] != 0)
		return (ft_valide(grille, position + 1));
	k = 0;
	while (++k <= 9)
		if (ft_ligne(k, grille, i) && ft_colonne(k, grille, j) \
				&& ft_bloc(k, grille, i, j))
		{
			grille[i][j] = k;
			if (ft_valide(grille, position + 1))
				return (1);
		}
	grille[i][j] = 0;
	return (0);
}

int		main(int argc, char **argv)
{
	char	*sud[9];
	int		grille[9][9];
	int		verif[9][9];
	int		i;

	if (argc != 10)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	i = 0;
	while (i + 1 < argc)
	{
		sud[i] = argv[i + 1];
		i++;
	}
	if (ft_verif_2(grille, sud) == 0)
		return (0);
	ft_verif_4(verif, grille);
	ft_valide(grille, 0);
	if (ft_verif(grille, verif) == 0)
		return (0);
	ft_print(grille);
	return (0);
}
