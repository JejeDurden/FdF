/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <jdesmare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 19:23:16 by jdesmare          #+#    #+#             */
/*   Updated: 2017/01/21 19:21:17 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/fdf.h"

static int		ft_draw_lines(t_info *map)
{
	t_bres		*bres;

	if (!(bres = (t_bres *)malloc(sizeof(t_bres))))
		return (-1);
	bres->dx = abs(map->x2 - map->x1);
	bres->dy = -abs(map->y2 - map->y1);
	bres->sx = (map->x1 < map->x2) ? 1 : -1;
	bres->sy = (map->y1 < map->y2) ? 1 : -1;
	bres->err = bres->dx + bres->dy;
	while (map->x1 != map->x2 || map->y1 != map->y2)
	{
		ft_pixel_put(map, map->x1, map->y1);
		bres->err2 = 2 * bres->err;
		if (bres->err2 <= bres->dx)
		{
			bres->err += bres->dx;
			map->y1 += bres->sy;
		}
		if (bres->err2 >= bres->dy)
		{
			bres->err += bres->dy;
			map->x1 += bres->sx;
		}
	}
	return (1);
}

static void		ft_iso(t_info *map, int x, int y, int n)
{
	int		y1;
	int		x1;

	if (map->proj == 1)
	{
		if (n == 0)
		{
			x1 = x - 1;
			y1 = y;
		}
		if (n == 1)
		{
			x1 = x;
			y1 = y - 1;
		}
		map->x1 = (x1 * map->padding + 100) + map->height * map->tab[y1][x1];
		map->y1 = (y1 * map->padding + 100) + (map->height / 2) * map->tab[y1][x1];
		map->x2 = (x * map->padding + 100) + map->height * map->tab[y][x];
		map->y2 = (y * map->padding + 100) + (map->height / 2) * map->tab[y][x];
	}
	else
		ft_switch_proj(map, x, y, n);
}

int				ft_draw(t_info *map)
{
	int		x;
	int		y;

	y = 0;
	x = 0;
	ft_init_image(map);
	while (y < map->max_y)
	{
		x = 0;
		while (x < map->max_x)
		{
			if (x < map->max_x && x > 0)
				ft_iso(map, x, y, 0);
			if (ft_draw_lines(map) == -1)
				return (-1);
			if (y < map->max_y && y > 0)
				ft_iso(map, x, y, 1);
			if (ft_draw_lines(map) == -1)
				return (-1);
			x++;
		}
		y++;
	}
	ft_destroy_image(map);
	return (1);
}

int				ft_display(t_info *map)
{
	if (ft_init(map) == -1)
		return (-1);
	mlx_key_hook(map->window, ft_key_event, map);
	mlx_expose_hook(map->window, ft_draw, map);
	mlx_loop(map->mlx);
	return (1);
}
