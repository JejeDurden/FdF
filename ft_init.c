/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <jdesmare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/30 10:37:21 by jdesmare          #+#    #+#             */
/*   Updated: 2017/01/02 17:06:11 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/fdf.h"

int		ft_init(t_info *map)
{
	if (!(map->mlx = mlx_init()))
		return (-1);
	map->window = mlx_new_window(map->mlx, map->window_x, map->window_y , "fdf");
	map->zoom = 30;
	return (1);
}
