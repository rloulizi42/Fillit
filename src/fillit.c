/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rloulizi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/07 19:02:57 by rloulizi          #+#    #+#             */
/*   Updated: 2017/05/09 15:37:19 by rloulizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fillit.h"

int		fillit(t_map map, t_tetrimino *ttrmns, int n, int cpt)
{
	int		y;
	int		x;

	if (cpt == n)
		return (1);
	y = -1;
	while (++y < map.size && (x = -1))
		while (++x < map.size)
			if (can_put(ttrmns[cpt], map, y, x))
			{
				pos(ttrmns[cpt], map, y, x);
				if (fillit(map, ttrmns, n, cpt + 1))
					return (1);
				pop(map, ttrmns[cpt].letter);
			}
	return (0);
}
