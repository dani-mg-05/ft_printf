/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damedina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 19:19:07 by damedina          #+#    #+#             */
/*   Updated: 2023/10/18 13:34:26 by damedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_putchar_fd(char c, int fd)
{
	size_t	ret;

	ret = write(fd, &c, 1);
	if (ret == (size_t)-1)
		return (ret);
	return (0);
}
