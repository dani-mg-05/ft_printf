/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dec_hex.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damedina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 19:09:57 by damedina          #+#    #+#             */
/*   Updated: 2023/10/18 13:24:46 by damedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	dec_hex(uintptr_t dec, char *base)
{
	int	printed;
	int	ret;

	if (dec < 16)
	{
		if (ft_putchar_fd(base[dec], 1) != 0)
			return (-1);
		return (1);
	}
	ret = dec_hex(dec / 16, base);
	if (ret == -1)
		return (-1);
	printed = 1 + ret;
	if (ft_putchar_fd(base[dec % 16], 1) != 0)
		return (-1);
	return (printed);
}
