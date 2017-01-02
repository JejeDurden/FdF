/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_max.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <jdesmare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 17:20:20 by jdesmare          #+#    #+#             */
/*   Updated: 2017/01/01 15:48:06 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/fdf.h"

void		ft_get_max(int fd, t_info *map)
{
	char	*line;
	int		y;

	y = 0;
	while (get_next_line(fd, &line))
	{
		y++;
		map->max_x = ft_countwords(line, ' ');
		free(line);
	}
	map->max_y = y;
}
