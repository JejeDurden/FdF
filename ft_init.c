/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <jdesmare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/30 10:37:21 by jdesmare          #+#    #+#             */
/*   Updated: 2017/02/19 12:40:09 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/fdf.h"

int		ft_init(t_info *map)
{
	if (map->max_x == 0 || map->max_y == 0)
		return (-1);
	if (!(map->mlx = mlx_init()))
		return (-1);
	map->window = mlx_new_window(map->mlx, map->window_x, map->window_y, "fdf");
	map->height = 10;
	return (1);
}
