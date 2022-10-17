/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cportuon <cportuon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 08:52:08 by cportuon          #+#    #+#             */
/*   Updated: 2022/10/17 12:38:38 by cportuon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<stdarg.h>
# include<unistd.h>
# include<stdio.h>

int	ft_printf(char const *str, ...);
int	ft_putchar(char arg, int len);
int	ft_putstr(char *arg, int len);
int	ft_puthexa(size_t arg, char str, int len);
int	ft_putnbr(int arg, int len);
int	ft_putnbru(unsigned int arg, int len);
int	fft_strlen(char c);

#endif
