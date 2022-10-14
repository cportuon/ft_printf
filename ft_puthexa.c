/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cportuon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 09:49:51 by cportuon          #+#    #+#             */
/*   Updated: 2022/10/10 09:49:53 by cportuon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_puthexa(int arg, char str, int len)
{
    if (str == 'x')
    {
        if (arg >= 16)
            len = len + ft_puthexa(arg / 16, str, len);
    }
    if (str == 'X')
    {

    }
}
