/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <jdesmare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 11:34:13 by jdesmare          #+#    #+#             */
/*   Updated: 2016/12/02 15:50:29 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/fdf.h"

int		main(int argc, char **argv)
{
	int		fd;

	fd = 0;
	if (argc != 2)
	{
		ft_putstr_fd("Usage : ./fdf <filename> [ case_size z_size ]\n", 2);
		return (-1);
	}
	else 
	{
		fd = open(argv[1], O_RDONLY);
		ft_putnbr(fd);
		if (fd == -1)
		{
			ft_putstr_fd("No data found.\n", 2);
			return (-1);
		}
	}
	if (ft_fdf(fd) == -1)
		ft_putstr_fd("Erreur\n", 2);
	if (close(fd) == -1)
		ft_putstr_fd("Close failed\n", 2);
	return (1);
}
