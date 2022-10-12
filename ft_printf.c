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

static int	ft_console(va_list ptr, const char *str)
{
	if (str == 'c')
		ft_putchar(va_arg(ptr, char));
	else if (str == 's')
		ft_putstr();
	else if (str == 'p')

	else if (str == 'd')

	else if (str == 'i')

	else if (str == 'u')

	else if (str == 'x')

	else if (str == 'X')

	else (str == '%')
}

int	ft_printf(char const *str, ...)
{
	va_list	ptr;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(ptr, str);
	while (str[i])
	{
		ft_putchar(&str[i]);
		if (str[i] == '%')
		{
			ft_console(ptr, &str[i + 1]);
		}
		i++;
	}
	va_end(ptr);
	return (len)
}

int	main(void)
{

	return (0);
}
