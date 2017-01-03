/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_window_size.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <jdesmare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/02 14:14:52 by jdesmare          #+#    #+#             */
/*   Updated: 2017/01/03 07:56:25 by jdesmare         ###   ########.fr       */
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
			if (size < ((x * map->padding + 50) + map->zoom * map->tab[y][x]))
				size = (x * map->padding + 50) + map->zoom * map->tab[y][x];
			x++;
		}
		y++;
	}
	map->window_x = size + 150;
}

void			ft_window_size(t_info *map)
{
	int		x;
	int		y;
	int		size;

	x = 0;
	y = 0;
	size = 0;
	map->zoom = 30;
	ft_size_x(map);
	while (y < map->max_y)
	{
		x = 0;
		while (x < map->max_x)
		{
			if (size < ((y * map->padding + 50) + map->zoom * map->tab[y][x]))
				size = (y * map->padding + 50) + map->zoom * map->tab[y][x];
			x++;
		}
		y++;
	}
	map->window_y = size;
}
