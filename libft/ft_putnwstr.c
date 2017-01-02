/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnwstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <jdesmare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/29 17:46:41 by jdesmare          #+#    #+#             */
/*   Updated: 2017/01/01 13:40:38 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	ft_putnwstr(wchar_t *str, int n)
{
	int		i;

	i = 0;
	if (str && n != 0)
	{
		while (*str != '\0' && i < n)
		{
			ft_putwchar(*str);
			i += ft_char_size(*str);
			str++;
		}
	}
}
