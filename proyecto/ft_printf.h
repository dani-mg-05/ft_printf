/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damedina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 17:06:02 by damedina          #+#    #+#             */
/*   Updated: 2023/10/04 19:24:44 by damedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "./libft/libft.h"

int	ft_printf(char const *str, ...);
int	print_c(char c);
int	print_s(char *s);
int	print_p(unsigned long p);
int	print_d_i(int di);
int	print_u(unsigned int u);
int	dec_hex(uintptr_t dec, char *base);

#endif
