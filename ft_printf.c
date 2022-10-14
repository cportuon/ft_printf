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

int	ft_console(va_list ptr, const char *str, int len)
{
	if (str == 'c')
		ft_putchar(va_arg(ptr, char), len);
	else if (str == 's')
		ft_putstr(va_arg(ptr, char *), len);
	else if (str == 'p')

	else if (str == 'd')
		ft_putnbr(va_arg(ptr, int), len);
	else if (str == 'i')
		ft_putnbr(va_arg(ptr, int), len);
	else if (str == 'u')
		ft_putnbru(va_arg(ptr, unsigned int), len);
	else if (str == 'x')
		ft_puthexa(va_arg(ptr, int), str, len);
	else if (str == 'X')
		ft_puthexa(va_arg(ptr, int), str, len);
	else (str == '%')

	return (len);
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
		ft_putchar(&str[i], len);
		if (str[i] == '%')
			ft_console(ptr, &str[i + 1], len);	
		len++;
		i++;
	}
	va_end(ptr);
	return (len);
}

int	main(void)
{

	return (0);
}
