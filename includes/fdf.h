/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <jdesmare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 11:37:20 by jdesmare          #+#    #+#             */
/*   Updated: 2017/01/21 17:07:46 by jdesmare         ###   ########.fr       */
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
	void	*image;
	char	*data;
	int		window_x;
	int		window_y;
	int		max_x;
	int		max_y;
	int		height;
	int		x1;
	int		x2;
	int		y1;
	int		y2;
	int		**tab;
	int		padding;
	int		blue;
	int		green;
	int		red;
	int		proj;
}					t_info;

typedef struct		s_bres
{
	int		dx;
	int		dy;
	int		sx;
	int		sy;
	int		err;
	int		err2;
}					t_bres;

int					ft_fdf(t_info *map, char *file);
int					**ft_reader(int **tab, int fd);
int					ft_get_max(int fd, t_info *map);
int					ft_display(t_info *map);
int					ft_init(t_info *map);
void				ft_padding(t_info *map);
void				ft_window_size(t_info *map);
int					ft_key_event(int keycode, t_info *map);
int					ft_draw(t_info *map);
int					ft_expose_hook(t_info *map);
void				ft_init_image(t_info *map);
void				ft_destroy_image(t_info *map);
void				ft_pixel_put(t_info *map, int x, int y);
void				ft_black(t_info *map);
void				ft_light_green(t_info *map);
void				ft_light_blue(t_info *map);
void				ft_pink(t_info *map);
void				ft_white(t_info *map);
void				ft_red(t_info *map);
void				ft_blue(t_info *map);
void				ft_orange(t_info *map);
void				ft_yellow(t_info *map);
void				ft_light_grey(t_info *map);
void				ft_colors_0(t_info *map);
void				ft_colors_1(t_info *map);
void				ft_colors_2(t_info *map);
void				ft_gradient_weird(t_info *map);
void				ft_degradient_blue(t_info *map);
void				ft_switch_proj(t_info *map, int x, int y, int n);


#endif
