/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cportuon <cportuon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 09:49:51 by cportuon          #+#    #+#             */
/*   Updated: 2022/10/17 12:45:20 by cportuon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(size_t arg, char str, int len)
{
	if (arg >= 16)
		len = ft_puthexa(arg / 16, str, len);
	if (str == 'x' || str == 'p')
		len = ft_putchar("0123456789abcdef"[arg % 16], len);
	if (str == 'X')
		len = ft_putchar("0123456789ABCDEF"[arg % 16], len);
	return (len);
}
