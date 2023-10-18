/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_d_i.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damedina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 19:32:58 by damedina          #+#    #+#             */
/*   Updated: 2023/10/18 13:26:30 by damedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_d_i(int di)
{
	char	*number;
	int		printed;

	number = ft_itoa(di);
	if (!number)
		return (-1);
	if (ft_putstr_fd(number, 1) != 0)
	{
		free(number);
		return (-1);
	}
	printed = ft_strlen(number);
	free(number);
	return (printed);
}
