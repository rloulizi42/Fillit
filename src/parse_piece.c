/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pars_piece.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rloulizi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/02 17:54:51 by rloulizi          #+#    #+#             */
/*   Updated: 2017/11/23 13:46:40 by rloulizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fillit.h"

void	fill_tetrimino(t_tetrimino *tetrimino, t_point *rgn, t_point *p, int k)
{
	tetrimino->points[k].i = p->i - rgn->i;
	tetrimino->points[k].j = p->j - rgn->j;
}

void	fill_point(t_point *p, int i)
{
	p->i = i / 5;
	p->j = i % 5;
}

void	parse_piece(char *piece, t_tetrimino *tetrimino)
{
	t_point	origine;
	t_point	p;
	int		origin_is_set;
	int		i;
	int		k;

	i = 0;
	k = 0;
	origin_is_set = 0;
	while (i < 21)
	{
		if (piece[i] == '#')
		{
			fill_point(&p, i);
			if (!origin_is_set)
			{
				origin_is_set = 1;
				origine.i = p.i;
				origine.j = p.j;
			}
			fill_tetrimino(tetrimino, &origine, &p, k++);
		}
		i++;
	}
}
