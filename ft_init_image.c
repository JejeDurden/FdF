/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_image.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <jdesmare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 11:39:47 by jdesmare          #+#    #+#             */
/*   Updated: 2017/01/21 16:29:04 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/fdf.h"

void	ft_init_image(t_info *map)
{
	int		bpp;
	int		sizeline;
	int		endian;

	bpp = 32;
	sizeline = map->window_x * 4;
	endian = 0;
	map->image = mlx_new_image(map->mlx, map->window_x, map->window_y);
	map->data = mlx_get_data_addr(map->image, &bpp, &sizeline, &endian);
}
