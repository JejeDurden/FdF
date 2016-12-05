/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reader.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <jdesmare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 16:03:09 by jdesmare          #+#    #+#             */
/*   Updated: 2016/12/05 19:17:13 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/fdf.h"

int		**ft_reader(int **tab, int fd)
{
	char	*line;
	char	**line_split;
	int		i;
	int		j;

	i = 0;
	while (get_next_line(fd, &line))
	{
		j = 0;
		line_split = ft_strsplit(line, ' ');
		tab[i] = ft_memalloc(sizeof(int) * ft_countwords(line, ' '));
		free(line);
		while (line_split[j])
		{
			tab[i][j] = ft_atoi(line_split[j]);
			free(line_split[j]);
			j++;
		}
		i++;
		free(line_split);
	}
	return (tab);
}
