/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_max.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <jdesmare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 17:20:20 by jdesmare          #+#    #+#             */
/*   Updated: 2017/02/19 12:40:27 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/fdf.h"

int		ft_get_max(int fd, t_info *map)
{
	char	*line;
	int		y;
	int		flag;

	y = 0;
	flag = 1;
	while (get_next_line(fd, &line) > 0)
	{
		y++;
		if (flag == 1)
		{
			map->max_x = ft_countwords(line, ' ');
			flag = 0;
		}
		if (ft_countwords(line, ' ') != map->max_x)
			return (-1);
		free(line);
	}
	map->max_y = y;
	return (1);
}
