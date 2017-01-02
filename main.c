/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <jdesmare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 11:34:13 by jdesmare          #+#    #+#             */
/*   Updated: 2017/01/02 19:28:57 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/fdf.h"

int		main(int argc, char **argv)
{
	int		fd;
	t_info	*map;

	fd = 0;
	if (!(map = (t_info *)malloc(sizeof(t_info))))
			return (-1);
	if (argc != 2)
	{
		ft_putstr_fd("Usage : ./fdf <filename> [ case_size z_size ]\n", 2);
		return (-1);
	}
	if (ft_fdf(map, argv[1]) == -1)
		return(-1);
	if (close(fd) == -1)
		ft_putstr_fd("Close failed\n", 2);
	free(map);
	return (1);
}
