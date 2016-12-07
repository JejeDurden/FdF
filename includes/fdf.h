/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <jdesmare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 11:37:20 by jdesmare          #+#    #+#             */
/*   Updated: 2016/12/07 07:47:09 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include <mlx.h>
# include <math.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <errno.h>
# include <stdio.h>
# include "../libft/libft.h"
# include "../libft/get_next_line.h"

int			ft_fdf(char *file);
int			**ft_reader(int **tab, int fd);
int			ft_get_y(int fd);
int			ft_display(int **nb, int line, int col);

#endif
