/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rloulizi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/26 12:49:03 by rloulizi          #+#    #+#             */
/*   Updated: 2017/05/10 14:41:36 by rloulizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fillit.h"

static size_t	number_pieces(char *file_name)
{
	int		fd;
	char	*buf;
	int		ret;
	size_t	i;

	i = 0;
	if ((fd = open(file_name, O_RDONLY)) == -1)
		return (0);
	else
	{
		buf = ft_strnew(21);
		while (((ret = read(fd, buf, 21))) != 0)
			i++;
		return (i);
		close(fd);
	}
	return (0);
}

void			*ret_function(void)
{
	ft_putendl("error");
	return (NULL);
}

void			*ft_read_bis(int fd, size_t nb_piece, char **tab)
{
	size_t	ret;
	size_t	i;
	char	buf[21];

	i = 0;
	while ((ret = read(fd, buf, 21)) != 0)
	{
		if (nb_piece - 1 == i && ret != 20)
			return (ret_function());
		tab[i] = ft_strnew(ret);
		tab[i] = ft_strncpy(tab[i], buf, ret);
		if (!ft_check(buf))
			return (ret_function());
		i++;
	}
	tab[i] = 0;
	return (*tab);
}

char			**ft_read_file(char *file_name, int *len)
{
	int		fd;
	char	**tab;
	size_t	nb_piece;

	if (!(nb_piece = number_pieces(file_name)))
		return (ret_function());
	if (!(tab = (char**)malloc(sizeof(char *) * nb_piece + 1)))
		return (NULL);
	if ((fd = open(file_name, O_RDONLY)) == -1)
		return (ret_function());
	else
	{
		if (!ft_read_bis(fd, nb_piece, tab))
			return (NULL);
		*len = nb_piece;
		return (tab);
	}
	return (0);
}
