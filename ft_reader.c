/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reader.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <jdesmare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 16:03:09 by jdesmare          #+#    #+#             */
/*   Updated: 2016/12/02 16:12:45 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/fdf.h"

int		**ft_reader(int fd)
{
	int		**tab;
	char	*line;
	char	**line_split;
	int		i;
	int		j;
	int		*coord;

	i = 0;
	j = 0;
	while (get_next_line(fd, &line))
	{
		line_split = ft_strsplit(line, ' ');
		while (line_split)
		{
			coord[j] = ft_atoi(line_split[j]);
			j++;
		}
		tab[i] = coord;
		i++;
	}
	return (tab);
}
