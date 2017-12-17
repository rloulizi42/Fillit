/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rloulizi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/08 13:02:04 by rloulizi          #+#    #+#             */
/*   Updated: 2017/05/09 15:30:36 by rloulizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fillit.h"

int		can_put(t_tetrimino piece, t_map map, int y, int x)
{
	int		nb_dieze;

	nb_dieze = 0;
	while (nb_dieze < 4)
	{
		if (y + piece.points[nb_dieze].i < map.size
				&& x + piece.points[nb_dieze].j < map.size)
		{
			if (map.tab[y + piece.points[nb_dieze].i]
					[x + piece.points[nb_dieze].j] != '.')
				return (0);
		}
		else
			return (0);
		nb_dieze++;
	}
	return (1);
}

int		pos(t_tetrimino piece, t_map map, int y, int x)
{
	int		nb_dieze;

	nb_dieze = 0;
	while (nb_dieze < 4)
	{
		if (y + piece.points[nb_dieze].i < map.size
				&& x + piece.points[nb_dieze].j < map.size)
			map.tab[y + piece.points[nb_dieze].i]
				[x + piece.points[nb_dieze].j] = piece.letter;
		nb_dieze++;
	}
	return (1);
}

void	pop(t_map map, char c)
{
	int		y;
	int		x;

	y = -1;
	while (++y < map.size && (x = -1))
		while (++x < map.size)
			if (map.tab[y][x] == c)
				map.tab[y][x] = '.';
}
