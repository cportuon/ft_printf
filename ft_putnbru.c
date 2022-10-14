#include "libftprintf.h"

int    ft_putnbru(unsigned int arg, int len)
{
    if (arg >= 10)
    {
        ft_putnbr(arg / 10, len);
        ft_putnbr(arg % 10, len);
    }
    else if (arg >= 0)
        ft_putchar(arg + 48, len);
    return (len);
}