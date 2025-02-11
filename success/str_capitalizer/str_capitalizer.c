
#include <unistd.h>

void	capital(char *str)
{
	int i = 0;

	if (str[i] && str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	write(1, &str[i], 1);
	while (str[++i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (str[i] >= 'a' && str[i] <= 'z' && (str[i - 1] == ' ' || str[i - 1] == '\t'))
			str[i] -= 32;
		write(1, &str[i], 1);
	}
}

int main(int ac, char **av)
{
	int i = 1;

	if (ac < 2)
	{
		write (1, "\n", 1);
	}
	while (ac > i)
	{
		capital(av[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}

