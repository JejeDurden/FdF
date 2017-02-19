/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_key_event.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <jdesmare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/02 18:05:38 by jdesmare          #+#    #+#             */
/*   Updated: 2017/02/19 13:28:23 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/fdf.h"

static void		ft_move(int keycode, t_info *map)
{
	if (keycode == UP)
		map->x1 -= 20;
	if (keycode == DOWN)
		map->x2 += 20;
	if (keycode == LEFT)
		ft_gradient_weird(map);
	if (keycode == RIGHT)
		ft_degradient_blue(map);
}

int				ft_key_event(int keycode, t_info *map)
{
	ft_putnbr(keycode);
	ft_putchar('\n');
	mlx_clear_window(map->mlx, map->window);
	if (keycode == ECHAP)
		exit(0);
	if (keycode == PLUS)
		map->height++;
	if (keycode == MINUS)
		map->height--;
	if (keycode == A)
		map->padding--;
	if (keycode == Z)
		map->padding++;
	if (keycode == ZERO)
		map->proj = 0;
	if (keycode == ONE)
		map->proj = 1;
	if (keycode == UP || keycode == DOWN || keycode == LEFT || keycode == RIGHT)
		ft_move(keycode, map);
	ft_expose_hook(map);
	return (1);
}
