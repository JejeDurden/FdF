/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <jdesmare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 19:23:16 by jdesmare          #+#    #+#             */
/*   Updated: 2017/01/02 20:05:19 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/fdf.h"

static void		ft_pixel_put(t_info *map, int x, int y)
{
	if ((x <= map->window_x && x >= 0) && (y <= map->window_y && y >= 0))
		mlx_pixel_put(map->mlx, map->window, x, y, map->color);
}

static void		ft_draw_lines(t_info *map)
{
	int		dx;
	int		dy;
	int		sx;
	int		sy;
	int		err;
	int		err2;

	dx = abs(map->x2 - map->x1);
	dy = -abs(map->y2 - map->y1);
	sx = (map->x1 < map->x2) ? 1 : -1;
	sy = (map->y1 < map->y2) ? 1 : -1;
	err = dx + dy;
	while (1)
	{
		ft_pixel_put(map, map->x1, map->y1);
		if (map->x1 == map->x2 && map->y1 == map->y2)
			break ;
		err2 = 2 * err;
		if (err2 <= dx)
		{
			err += dx;
			map->y1 += sy;
		}
		if (err2 >= dy)
		{
			err += dy;
			map->x1 += sx;
		}
	}
}

static void		ft_iso(t_info *map, int x, int y, int x1, int y1)
{
	map->x1 = (x1 * map->padding + 50) + map->zoom * map->tab[y1][x1];
	map->y1 = (y1 * map->padding + 50) + (map->zoom / 2) * map->tab[y1][x1];
	map->x2 = (x * map->padding + 50) + map->zoom * map->tab[y][x];
	map->y2 = (y * map->padding + 50) + (map->zoom / 2) * map->tab[y][x];
	ft_pixel_put(map, map->x2, map->y2);
}

int		ft_draw(t_info *map)
{
	int		x;
	int		y;

	y = 0;
	x = 0;
	while (y < map->max_y)
	{
		x = 0;
		while (x < map->max_x)
		{
			if (x < map->max_x && x > 0)
				ft_iso(map, x, y, x - 1, y);
				ft_draw_lines(map);
			if (y < map->max_y && y > 0)
			{
				ft_iso(map, x, y, x, y - 1);
				ft_draw_lines(map);
			}
			x++;
		}
		y++;
	}
	return (1);
}

int		ft_display(t_info *map)
{

	if (ft_init(map) == -1)
		return (-1);
	mlx_key_hook(map->window, ft_key_event, map);
	mlx_expose_hook(map->window, ft_draw, map);
	mlx_loop(map->mlx);
	return (1);
}
