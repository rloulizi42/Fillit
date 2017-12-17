/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rloulizi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/25 14:44:19 by rloulizi          #+#    #+#             */
/*   Updated: 2017/05/09 15:29:29 by rloulizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fillit.h"

static int			ft_check_norme(char *str)
{
	int	diese;
	int	dot;
	int	n;
	int	i;

	diese = 0;
	dot = 0;
	n = 0;
	i = 0;
	if (str == NULL)
		return (0);
	while (i < 20)
	{
		if (str[i] == '#')
			diese++;
		if (str[i] == '.')
			dot++;
		if (str[i] == '\n' && ((i + 1) % 5 == 0))
			n++;
		i++;
	}
	if (diese == 4 && dot == 12 && n == 4)
		return (1);
	return (0);
}

int					ft_check(char *str)
{
	int i;

	i = 0;
	if (str == NULL)
		return (0);
	while (i < 21)
	{
		if ((ft_check_norme(str)) && ((ft_check_valide_i_and_o(str))
					|| (ft_check_valide_l(str)) || (ft_check_valide_s(str))
					|| (ft_check_valide_t(str)) || (ft_check_valide_j(str))))
			return (1);
		i++;
	}
	return (0);
}
