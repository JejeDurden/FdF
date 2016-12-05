/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fdf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <jdesmare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 15:47:03 by jdesmare          #+#    #+#             */
/*   Updated: 2016/12/05 19:21:47 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/fdf.h"

int		ft_fdf(char *file)
{
	int		**nb;
	int		fd;
	int		y;

	if ((fd = open(file, O_RDONLY)) == -1)
	{
		ft_putstr_fd("No data found.\n", 2);
		return (-1);
	}
	y = ft_get_y(fd);
	if (close(fd) == -1)
		ft_putstr_fd("Close failed\n", 2);
	if ((fd = open(file, O_RDONLY)) == -1)
	{
		ft_putstr_fd("No data found.\n", 2);
		return (-1);
	}
	nb = ft_memalloc(sizeof(int *) * y);
	nb = ft_reader(nb, fd);
	ft_display(nb);
	free(*nb);
	return (1);
}
