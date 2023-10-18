/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damedina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 17:03:59 by damedina          #+#    #+#             */
/*   Updated: 2023/10/18 14:30:56 by damedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

static int	conversions(char c, va_list args)
{
	if (c == 'c')
		return (print_c(va_arg(args, int)));
	if (c == 's')
		return (print_s(va_arg(args, char *)));
	if (c == 'p')
		return (print_p(va_arg(args, unsigned long)));
	if (c == 'd' || c == 'i')
		return (print_d_i(va_arg(args, int)));
	if (c == 'u')
		return (print_u(va_arg(args, unsigned int)));
	if (c == 'x')
		return (dec_hex(va_arg(args, unsigned int), "0123456789abcdef"));
	if (c == 'X')
		return (dec_hex(va_arg(args, unsigned int), "0123456789ABCDEF"));
	if (c == '%')
		return (print_c('%'));
	return (-1);
}

static int	ft_printf_aux(char c, int *printed)
{
	if (ft_putchar_fd(c, 1) != 0)
		return (-1);
	*printed = *printed + 1;
	return (0);
}

int	ft_printf(char const *str, ...)
{
	va_list	args;
	int		i;
	int		printed;
	int		ret;

	i = -1;
	printed = 0;
	va_start(args, str);
	while (str[++i] != '\0')
	{
		if (str[i] == '%' && str[i + 1] != '\0')
		{
			ret = conversions(str[i++ + 1], args);
			if (ret == -1)
				return (-1);
			printed += ret;
		}
		else if (str[i] != '%')
		{
			if (ft_printf_aux(str[i], &printed) == -1)
				return (-1);
		}
	}
	va_end(args);
	return (printed);
}
