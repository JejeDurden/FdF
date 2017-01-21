/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_window_size.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <jdesmare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/02 14:14:52 by jdesmare          #+#    #+#             */
/*   Updated: 2017/01/21 19:27:15 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/fdf.h"

static void		ft_size_x(t_info *map)
{
	int		x;
	int		y;
	int		size;

	x = 0;
	y = 0;
	size = 0;
	while (y < map->max_y)
	{
		x = 0;
		while (x < map->max_x)
		{
			if (size < ((x * map->padding + 100) + map->height * map->tab[y][x]))
				size = (x * map->padding + 100) + map->height * map->tab[y][x];
			x++;
		}
		y++;
	}
	map->window_x = size + 400;
	if (map->window_x > 2500)
		map->window_x = 2500;
}

void			ft_window_size(t_info *map)
{
	int		x;
	int		y;
	int		size;

	x = 0;
	y = 0;
	size = 0;
	map->height = 30;
	ft_size_x(map);
	while (y < map->max_y)
	{
		x = 0;
		while (x < map->max_x)
		{
			if (size < ((y * map->padding + 100) + map->height * map->tab[y][x]))
				size = (y * map->padding + 100) + map->height * map->tab[y][x];
			x++;
		}
		y++;
	}
	map->window_y = size + 400;
	if (map->window_y > 1300)
		map->window_y = 1300;
}
