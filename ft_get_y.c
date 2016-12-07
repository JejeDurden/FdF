/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_y.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <jdesmare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 17:20:20 by jdesmare          #+#    #+#             */
/*   Updated: 2016/12/06 13:00:47 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/fdf.h"

int		ft_get_y(int fd)
{
	char	*line;
	int		y;

	y = 0;
	while (get_next_line(fd, &line))
	{
		y++;
		free(line);
	}
	return (y);
}
