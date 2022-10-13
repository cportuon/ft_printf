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

int	ft_putnbr(int n, int len)
{
	if (n == -2147483648)
	{
		ft_putstr("-2147483648", len);
		return (len);
	}
	if (n < 0)
	{
		ft_putchar("-", len);
		n = n * -1;
	}
	if (n > 9)
		ft_putnbr(n / 10, len);
	ft_putchar(n % 10 + '0', len);
	return (len);
}
