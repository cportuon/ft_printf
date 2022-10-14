/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cportuon <cportuon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 08:52:08 by cportuon          #+#    #+#             */
/*   Updated: 2022/10/11 10:09:18 by cportuon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include<stdarg.h>
# include<unistd.h>

int ft_putchar(char arg, int len);
int ft_putstr(char *arg, int len);
int ft_puthexa(int arg, char str, int len);
int	ft_putnbr(int arg, int len);
int ft_putnbru(unsigned int arg, int len);

#endif
