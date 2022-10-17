/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cportuon <cportuon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 09:49:01 by cportuon          #+#    #+#             */
/*   Updated: 2022/10/17 12:20:05 by cportuon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int arg, int len)
{
	if (arg == -2147483648)
	{
		len = ft_putstr("-2147483648", len);
		return (len);
	}
	if (arg < 0)
	{
		len = ft_putchar('-', len);
		arg = arg * -1;
	}
	if (arg > 9)
		len = ft_putnbr(arg / 10, len);
	len = ft_putchar(arg % 10 + '0', len);
	return (len);
}
