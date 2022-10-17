/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbru.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cportuon <cportuon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 08:36:42 by cportuon          #+#    #+#             */
/*   Updated: 2022/10/17 12:20:02 by cportuon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbru(unsigned int arg, int len)
{
	if (arg >= 10)
	{
		len = ft_putnbr(arg / 10, len);
		len = ft_putnbr(arg % 10, len);
	}
	else if (arg >= 0)
		len = ft_putchar(arg + 48, len);
	return (len);
}
