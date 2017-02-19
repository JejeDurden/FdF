/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_switch_proj.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <jdesmare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/21 17:07:56 by jdesmare          #+#    #+#             */
/*   Updated: 2017/02/19 13:31:14 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/fdf.h"

void	ft_switch_proj(t_info *map, int x, int y, int n)
{
	int		y1;
	int		x1;

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
	if (map->proj == 0)
	{
		map->x1 = (sqrt(2) / 2) * (x1 - y1) * map->padding +
			(map->window_x / 3);
		map->y1 = sqrt(2. / 3.) * map->tab[y1][x1] * (map->height * -1) +
			(1 / sqrt(6)) * (x1 + y1) * map->padding + (map->window_y / 2);
		map->x2 = (sqrt(2) / 2) * (x - y) * map->padding + (map->window_x / 3);
		map->y2 = sqrt(2. / 3.) * map->tab[y][x] * (map->height * -1) +
			(1 / sqrt(6)) * (x + y) * map->padding + (map->window_y / 2);
	}
}
