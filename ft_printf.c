/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cportuon <cportuon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 09:31:12 by cportuon          #+#    #+#             */
/*   Updated: 2022/10/11 12:23:26 by cportuon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

staticint	ft_console()
{
	
}

int	ft_printf(char const *str, ...)
{
	va_list	variadica;
	int		i;

	i = 0;
	va_start(variadica, str);
	while (str)
	{
		ft_putchar(&str);
		if (str[i] == '%')
		{
			
		}
	}
}

int	main(void)
{

	return (0);
}
