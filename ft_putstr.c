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

int	ft_putstr(char *str, int len)
{
	int	i;

	i = 0;
	if (!str)
	{
		ft_putstr("(NULL)", len);
		return (6);
	}
	while (str[i])
	{
		ft_putchar(&str[i], len);
		i++;
	}
	return (len);
}
