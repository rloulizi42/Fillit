/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_symbol.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rloulizi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/08 17:31:50 by rloulizi          #+#    #+#             */
/*   Updated: 2017/05/09 15:31:40 by rloulizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fillit.h"

int		ft_check_valide_i_and_o(char *str)
{
	int i;

	i = 0;
	if (str == NULL)
		return (0);
	while (i < 21)
	{
		if (str[i] == '#' && str[i + 1] == '#' &&
				str[i + 2] == '#' && str[i + 3] == '#')
			return (1);
		else if (str[i] == '#' && str[i + 5] == '#' &&
				str[i + 10] == '#' && str[i + 15] == '#')
			return (1);
		else if (str[i] == '#' && str[i + 1] == '#' &&
				str[i + 5] == '#' && str[i + 6] == '#')
			return (1);
		i++;
	}
	return (0);
}

int		ft_check_valide_l(char *str)
{
	int i;

	i = 0;
	if (str == NULL)
		return (0);
	while (i < 21)
	{
		if (str[i] == '#' && str[i + 1] == '#' &&
				str[i + 5] == '#' && str[i + 10] == '#')
			return (1);
		else if (str[i] == '#' && str[i + 1] == '#' &&
				str[i + 6] == '#' && str[i + 11] == '#')
			return (1);
		else if (str[i] == '#' && str[i + 5] == '#' &&
				str[i + 10] == '#' && str[i + 11] == '#')
			return (1);
		else if (str[i] == '#' && str[i + 5] == '#' &&
				str[i + 9] == '#' && str[i + 10] == '#')
			return (1);
		i++;
	}
	return (0);
}

int		ft_check_valide_s(char *str)
{
	int i;

	i = 0;
	if (str == NULL)
		return (0);
	while (i < 21)
	{
		if (str[i] == '#' && str[i + 1] == '#' &&
				str[i + 6] == '#' && str[i + 7] == '#')
			return (1);
		else if (str[i] == '#' && str[i + 1] == '#' &&
				str[i + 4] == '#' && str[i + 5] == '#')
			return (1);
		else if (str[i] == '#' && str[i + 4] == '#' &&
				str[i + 5] == '#' && str[i + 9] == '#')
			return (1);
		else if (str[i] == '#' && str[i + 5] == '#' &&
				str[i + 6] == '#' && str[i + 11] == '#')
			return (1);
		i++;
	}
	return (0);
}

int		ft_check_valide_t(char *str)
{
	int i;

	i = 0;
	if (str == NULL)
		return (0);
	while (i < 21)
	{
		if (str[i] == '#' && str[i + 4] == '#' &&
				str[i + 5] == '#' && str[i + 6] == '#')
			return (1);
		else if (str[i] == '#' && str[i + 1] == '#' &&
				str[i + 2] == '#' && str[i + 6] == '#')
			return (1);
		else if (str[i] == '#' && str[i + 5] == '#' &&
				str[i + 6] == '#' && str[i + 10] == '#')
			return (1);
		else if (str[i] == '#' && str[i + 4] == '#' &&
				str[i + 5] == '#' && str[i + 10] == '#')
			return (1);
		i++;
	}
	return (0);
}

int		ft_check_valide_j(char *str)
{
	int i;

	i = 0;
	if (str == NULL)
		return (0);
	while (i < 21)
	{
		if (str[i] == '#' && str[i + 5] == '#' &&
				str[i + 6] == '#' && str[i + 7] == '#')
			return (1);
		else if (str[i] == '#' && str[i + 3] == '#' &&
				str[i + 4] == '#' && str[i + 5] == '#')
			return (1);
		else if (str[i] == '#' && str[i + 1] == '#' &&
				str[i + 2] == '#' && str[i + 5] == '#')
			return (1);
		else if (str[i] == '#' && str[i + 1] == '#' &&
				str[i + 2] == '#' && str[i + 7] == '#')
			return (1);
		i++;
	}
	return (0);
}
