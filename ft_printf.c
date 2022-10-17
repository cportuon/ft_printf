/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cportuon <cportuon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 09:31:12 by cportuon          #+#    #+#             */
/*   Updated: 2022/10/17 12:46:42 by cportuon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_console(va_list ptr, const char str, int len)
{
	if (str == 'c')
		len = ft_putchar(va_arg(ptr, int), len);
	else if (str == 's')
		len = ft_putstr(va_arg(ptr, char *), len);
	else if (str == 'd' || str == 'i')
		len = ft_putnbr(va_arg(ptr, int), len);
	else if (str == 'u')
		len = ft_putnbru(va_arg(ptr, unsigned int), len);
	else if (str == 'x' || str == 'X')
		len = ft_puthexa(va_arg(ptr, unsigned int), str, len);
	else if (str == 'p')
	{
		len = ft_putstr("0x", len);
		len = ft_puthexa(va_arg(ptr, size_t), str, len);
	}
	else if (str == '%')
		len = ft_putchar('%', len);
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
		if (str[i] != '%')
		{
			ft_putchar(str[i], len);
			len++;
		}
		if (str[i] == '%')
			len = ft_console(ptr, str[++i], len);
		i++;
	}
	va_end(ptr);
	return (len);
}

/* int	main(void)
{
	int		*num;
	int		i;
	int		j;

	num = &i;
	i = printf(" c: %p\n", num);
	j = ft_printf("ft: %p\n", num);
	printf(" c: %d\nft: %d\n", i, j);
	return (0);
} */
