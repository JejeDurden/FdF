/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <jdesmare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 19:23:16 by jdesmare          #+#    #+#             */
/*   Updated: 2016/12/07 15:38:07 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/fdf.h"

static void		ft_draw_line1(int x1, int y1, int x2, int y2, void *mlx, void *win)
{
	int		x;

	x = x1;
	while (x <= x2)
	{
		mlx_pixel_put(mlx, win, x, y1 + ((y2 - y1) * (x - x1)) / (x2 - x1), 0xFF0000);
		x++;
	}
}

static void		ft_draw_line2(int y1, int x1, int y2, int x2, void *mlx, void *win)
{
	int		y;

	y = y1;
	while (y <= y2)
	{
		mlx_pixel_put(mlx, win, x1 + ((x2 - x1) * (y - y1)) / (y2 - y1), y, 0xFFFF00);
		y++;
	}
}


int		ft_display(int **tab, int line, int col)
{
	void	*mlx;
	void	*win;
	int		x;
	int		y;
	int		X;
	int		Y;
	int		k;
	int		X2;
	int		Y2;

	x = 0;
	y = 0;
	k = 18;
	mlx = mlx_init();
	win = mlx_new_window(mlx, 700, 700, "CE dans le retro");
	col = (&(*tab))[1] - *tab - 1;
	while (y < line)
	{
		x = 0;
		while (x < col)
		{
			X = x * 20 + 100 + (k * tab[y][x]);
			Y = y * 20 + 100 + (k * tab[y][x]);
			if (x < col - 1 && y < line - 1)
			{
				X2 = (x + 1) * 20 + 100 + (k * tab[y][x + 1]);
				Y2 = y * 20 + 100 + (k * tab[y][x + 1]);
	//			if ((tab[y][x] < tab[y][x + 1]) || (tab[y][x + 1] < tab[y][x]))
	//				ft_draw_line1(X, Y, X2, Y2, mlx, win);
	//			else
					ft_draw_line1(X, Y, X2, Y2, mlx, win);
			}
			if (y < line - 1)
			{
				Y2 = (y + 1) * 20 + 100 + (k * tab[y + 1][x]);
				X2 = x * 20 + 100 + (k * tab[y + 1][x]);
		//		if ((tab[y][x] < tab[y + 1][x]) || (tab[y + 1][x] < tab[y][x]))
		//			ft_draw_line2(Y, X, Y2, X2, mlx, win);
		//		else
					ft_draw_line2(Y, X, Y2, X2, mlx, win);
			}
			x++;
		}
		y++;
	}
	mlx_loop(mlx);
	return (1);
}
