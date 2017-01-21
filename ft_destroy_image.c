/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy_image.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <jdesmare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 11:42:53 by jdesmare          #+#    #+#             */
/*   Updated: 2017/01/21 16:44:53 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/fdf.h"

void	ft_destroy_image(t_info *map)
{
	mlx_put_image_to_window(map->mlx, map->window, map->image, 0, 0);
	mlx_destroy_image(map->mlx, map->image);
}
