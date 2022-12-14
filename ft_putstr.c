/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cportuon <cportuon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 09:32:13 by cportuon          #+#    #+#             */
/*   Updated: 2022/10/17 12:43:04 by cportuon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *arg, int len)
{
	int	i;

	i = 0;
	if (!arg)
	{
		len = ft_putstr("(null)", len);
		return (len);
	}
	while (arg[i])
	{
		len = ft_putchar(arg[i], len);
		i++;
	}
	return (len);
}
