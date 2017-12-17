/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momar <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/01 20:54:08 by momar             #+#    #+#             */
/*   Updated: 2017/05/09 15:36:46 by rloulizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <stdlib.h>
# include "../libft/libft.h"

typedef struct	s_point
{
	int			i;
	int			j;
}				t_point;

typedef	struct	s_tetrimino
{
	t_point		points[4];
	int			width;
	int			height;
	char		letter;
	int			j_min;
}				t_tetrimino;

typedef struct	s_map
{
	char		**tab;
	int			size;
}				t_map;

int				ft_check(char *str);
int				ft_check_valide_i_and_o(char *str);
int				ft_check_valide_l(char *str);
int				ft_check_valide_s(char *str);
int				ft_check_valide_t(char *str);
int				ft_check_valide_j(char *str);
void			pop(t_map map, char c);
int				can_put(t_tetrimino piece, t_map map, int y, int x);
int				pos(t_tetrimino piece, t_map map, int y, int x);
int				fillit(t_map map, t_tetrimino *ttrmns, int tabsize, int cpt);
char			**ft_read_file(char *file_name, int *retsize);
void			parse_piece(char *piece, t_tetrimino *tetrimino);
void			puttab(char **tab);
char			**create_map(size_t n);
void			put_in_map(char	**tab, t_point *points);

#endif
