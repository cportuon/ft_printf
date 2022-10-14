/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cportuon <cportuon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 09:32:13 by cportuon          #+#    #+#             */
/*   Updated: 2022/10/10 09:32:25 by cportuon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putstr(char *arg, int len)
{
	int	i;

	i = 0;
	if (!arg)
	{
		ft_putstr("(NULL)", len);
		return (6);
	}
	while (arg[i])
	{
		ft_putchar(&arg[i], len);
		i++;
	}
	return (len);
}
