/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlunbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <jdesmare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/29 11:48:34 by jdesmare          #+#    #+#             */
/*   Updated: 2016/12/29 19:29:14 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putlunbr(unsigned long long int n)
{
	unsigned long long int		max;

	max = ULONG_MAX;
	if (n == max)
		ft_putstr("18446744073709551615");
	else if (n < max && n > 9)
	{
		ft_putlunbr(n / 10);
		ft_putlunbr(n % 10);
	}
	else
		ft_putchar(n + '0');
}
