/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_colors.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <jdesmare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/07 07:48:25 by jdesmare          #+#    #+#             */
/*   Updated: 2017/01/21 16:37:01 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/fdf.h"

void		ft_pink(t_info *map)
{
	map->red = 255;
	map->green = 153;
	map->blue = 255;
}

void		ft_light_blue(t_info *map)
{
	map->red = 153;
	map->green = 255;
	map->blue = 255;
}

void		ft_light_green(t_info *map)
{
	map->red = 153;
	map->green = 255;
	map->blue = 153;
}

void		ft_orange(t_info *map)
{
	map->red = 255;
	map->green = 153;
	map->blue = 0;
}

void		ft_black(t_info *map)
{
	map->red = 0;
	map->green = 0;
	map->blue = 0;
}
