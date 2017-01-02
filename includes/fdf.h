/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <jdesmare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 11:37:20 by jdesmare          #+#    #+#             */
/*   Updated: 2017/01/02 19:25:40 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include <mlx.h>
# include <math.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <errno.h>
# include <stdio.h>
# include "../libft/libft.h"
# include "../libft/get_next_line.h"

typedef struct		s_info
{
	void	*mlx;
	void	*window;
	int		window_x;
	int		window_y;
	int		max_x;
	int		max_y;
	int		color;
	int		zoom;
	int		x1;
	int		x2;
	int		y1;
	int		y2;
	int		**tab;
	int		padding;
}					t_info;

int					ft_fdf(t_info *map, char *file);
int					**ft_reader(int **tab, int fd);
void				ft_get_max(int fd, t_info *map);
int					ft_display(t_info *map);
int					ft_init(t_info *map);
void				ft_padding(t_info *map);
void				ft_window_size(t_info *map);
int					ft_key_event(int keycode, t_info *map);
int					ft_draw(t_info *map);
int					ft_expose_hook(t_info *map);

#endif
