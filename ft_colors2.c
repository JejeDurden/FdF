/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_colors2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <jdesmare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/07 09:03:13 by jdesmare          #+#    #+#             */
/*   Updated: 2017/01/21 16:36:58 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/fdf.h"

void		ft_blue(t_info *map)
{
	map->red = 0;
	map->green = 0;
	map->blue = 255;
}

void		ft_red(t_info *map)
{
	map->red = 255;
	map->green = 0;
	map->blue = 0;
}

void		ft_white(t_info *map)
{
	map->red = 255;
	map->green = 255;
	map->blue = 255;
}

void		ft_yellow(t_info *map)
{
	map->red = 255;
	map->green = 255;
	map->blue = 0;
}

void		ft_light_grey(t_info *map)
{
	map->red = 224;
	map->green = 224;
	map->blue = 224;
}
