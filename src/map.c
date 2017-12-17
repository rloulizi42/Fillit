/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rloulizi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/04 13:26:05 by rloulizi          #+#    #+#             */
/*   Updated: 2017/05/09 15:31:10 by rloulizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fillit.h"

char	**create_map(size_t n)
{
	char	**map;
	size_t	i;

	i = 0;
	map = (char **)malloc(sizeof(char*) * n + 1);
	while (i < n)
	{
		map[i] = ft_strnew(n + 1);
		map[i] = ft_memset(map[i], '.', n);
		i++;
	}
	map[i] = 0;
	return (map);
}

void	puttab(char **tab)
{
	int		i;

	i = 0;
	while (tab[i] != 0)
	{
		ft_putendl(tab[i]);
		i++;
	}
}

void	put_in_map(char **tab, t_point *points)
{
	tab[points->i][points->j] = '#';
}
