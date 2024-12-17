#include <unistd.h>

int ft_atoi(char *str)
{
	int i = 0;
	int sing = 1;
	int res = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res =  res * 10 + str[i] - '0';
		i++;
	}
	return (res * sing);
}

void ft_putchar (char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int n)
{
	if (n / 10 > 0)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int i = 1;
		int j = ft_atoi(av[1]);
		while (i <= 9)
		{
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(j);
			write(1, " = ", 3);
			ft_putnbr( i * j);
			write(1, "\n", 1);
			i++;
		}

	}
	if (ac < 2)
		ft_putchar('\n');
	return (0);
}
