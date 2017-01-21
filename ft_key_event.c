/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_key_event.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <jdesmare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/02 18:05:38 by jdesmare          #+#    #+#             */
/*   Updated: 2017/01/21 17:17:52 by jdesmare         ###   ########.fr       */
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
	if (keycode == 69)
		map->height++;
	if (keycode == 78)
		map->height--;
	if (keycode == 0)
		map->padding--;
	if (keycode == 6)
		map->padding++;
	if (keycode == 82)
		map->proj = 0;
	if (keycode == 83)
		map->proj = 1;
	ft_expose_hook(map);
	return (1);
}
