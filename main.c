/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <jdesmare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 11:34:13 by jdesmare          #+#    #+#             */
/*   Updated: 2017/02/19 12:38:12 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/fdf.h"

int		main(int argc, char **argv)
{
	t_info	*map;

	if (!(map = ft_memalloc(sizeof(t_info))))
		return (-1);
	if (argc != 2)
	{
		ft_putstr_fd("Usage : ./fdf <filename> [ case_size z_size ]\n", 2);
		return (-1);
	}
	if (ft_fdf(map, argv[1]) == -1)
	{
		ft_putstr_fd("File error\n", 2);
		return (-1);
	}
	free(map);
	return (1);
}
