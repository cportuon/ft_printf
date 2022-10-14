/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cportuon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 09:49:01 by cportuon          #+#    #+#             */
/*   Updated: 2022/10/11 10:06:54 by cportuon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr(int arg, int len)
{
	if (arg == -2147483648)
	{
		ft_putstr("-2147483648", len);
		return (len);
	}
	if (arg < 0)
	{
		ft_putchar("-", len);
		arg = arg * -1;
	}
	if (arg > 9)
		ft_putnbr(arg / 10, len);
	ft_putchar(arg % 10 + '0', len);
	return (len);
}
