/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damedina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 19:37:36 by damedina          #+#    #+#             */
/*   Updated: 2023/10/18 14:05:53 by damedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_u_aux(unsigned int u)
{
	char	*number;
	int		printed;

	printed = 0;
	if (u >= 10)
	{
		number = ft_itoa(u % 10);
		if (!number)
			return (-1);
		if (ft_putstr_fd(number, 1) != 0)
		{
			free(number);
			return (-1);
		}
		printed += ft_strlen(number);
		free(number);
	}
	return (printed);
}

int	print_u(unsigned int u)
{
	char	*number;
	int		printed;
	int		ret;

	if (u < 10)
		number = ft_itoa(u);
	else
		number = ft_itoa(u / 10);
	if (!number)
		return (-1);
	if (ft_putstr_fd(number, 1) != 0)
	{
		free(number);
		return (-1);
	}
	printed = ft_strlen(number);
	free(number);
	ret = print_u_aux(u);
	if (ret == -1)
		return (-1);
	return (printed + ret);
}
