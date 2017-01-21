/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pixel_put.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <jdesmare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 13:46:11 by jdesmare          #+#    #+#             */
/*   Updated: 2017/01/21 16:55:12 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/fdf.h"

void		ft_pixel_put(t_info *map, int x, int y)
{
	if (x > 0 && x < map->window_x && y > 0 && y < map->window_y)
	{
		map->data[(x * 4) + (y * map->window_x * 4)] = map->blue;
		map->data[(x * 4) + (y * map->window_x * 4) + 1] = map->green;
		map->data[(x * 4) + (y * map->window_x * 4) + 2] = map->red;
	}
}
