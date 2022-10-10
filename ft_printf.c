#include <unistd.h>

void	ft_print_c(char c)
{
	write(1, &c, 1);
	write(1, "\n", 1);
}

void	ft_print_str(char *str)
{
	unsigned int	i;

	i = 0;
	while(str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(void)
{
	ft_print_c('g');
	ft_print_str("Hello world");
	return (0);
}
