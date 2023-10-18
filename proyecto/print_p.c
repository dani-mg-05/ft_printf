/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damedina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 19:29:22 by damedina          #+#    #+#             */
/*   Updated: 2023/10/18 13:22:26 by damedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_p(unsigned long p)
{
	int	ret;

	if (ft_putstr_fd("0x", 1) != 0)
		return (-1);
	if (!p)
	{
		if (ft_putchar_fd('0', 1) != 0)
			return (-1);
		return (3);
	}
	ret = dec_hex(p, "0123456789abcdef");
	if (ret == -1)
		return (-1);
	return (2 + ret);
}
