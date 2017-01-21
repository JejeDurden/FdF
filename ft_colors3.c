/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_colors3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <jdesmare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/07 18:31:49 by jdesmare          #+#    #+#             */
/*   Updated: 2017/01/21 16:59:37 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/fdf.h"

void		ft_gradient_weird(t_info *map)
{
	int		n;

	n = 0;
	ft_pink(map);
	while (n < map->height)
	{
		map->green += 35;
		map->blue -= 10;
		n++;
	}
}

void		ft_degradient_blue(t_info *map)
{
	int		n;

	n = 0;
	ft_black(map);
	while (n < map->height)
	{
		map->blue += 25;
		n++;
	}
}

void		ft_gradient_blue(t_info *map)
{
	int		n;

	n = 0;
	ft_white(map);
	while (n < map->height)
	{
		map->red -= 25;
		map->green -= 25;
		n++;
	}
}
