/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_padding.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <jdesmare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/02 14:05:16 by jdesmare          #+#    #+#             */
/*   Updated: 2017/01/02 19:10:12 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/fdf.h"

void	ft_padding(t_info *map)
{
	int		size;

	size = ft_longer_size(map->max_x, map->max_y);
	if (size <= 20)
		map->padding = 25;
	else if (size >= 20 && size <= 50)
		map->padding = 20;
	else if (size >= 50 && size <= 100)
		map->padding = 15;
	else if (size >= 5 && size <= 200)
		map->padding = 10;
	else
		map->padding = 3;
}
