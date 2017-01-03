/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_key_event.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <jdesmare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/02 18:05:38 by jdesmare          #+#    #+#             */
/*   Updated: 2017/01/03 07:58:44 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/fdf.h"

int		ft_key_event(int keycode, t_info *map)
{
	ft_putnbr(keycode);
	ft_putchar('\n');
	mlx_clear_window(map->mlx, map->window);
	if (keycode == 53)
		exit(0);
	if (keycode == 11)
		map->color = 0x0000FF;
	if (keycode == 15)
		map->color = 0xFF0000;
	if (keycode == 5)
		map->color = 0x00FF00;
	if (keycode == 69)
		map->zoom++;
	if (keycode == 78)
		map->zoom--;
	ft_expose_hook(map);
	return (1);
}
