/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fdf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <jdesmare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 15:47:03 by jdesmare          #+#    #+#             */
/*   Updated: 2017/01/03 07:39:31 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/fdf.h"

int		ft_fdf(t_info *map, char *file)
{
	int		fd;

	if ((fd = open(file, O_RDONLY)) == -1)
	{
		ft_putstr_fd("No data found.\n", 2);
		return (-1);
	}
	if (ft_get_max(fd, map) == -1)
		return (-1);
	if (close(fd) == -1)
		ft_putstr_fd("Close failed\n", 2);
	if ((fd = open(file, O_RDONLY)) == -1)
	{
		ft_putstr_fd("No data found.\n", 2);
		return (-1);
	}
	map->tab = ft_memalloc(sizeof(int *) * map->max_y);
	map->tab = ft_reader(map->tab, fd);
	ft_padding(map);
	ft_window_size(map);
	map->color = 0x42adab;
	ft_display(map);
	free(map->tab);
	return (1);
}
