#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		int i = 0;
		int j = 0;
		if (atoi(av[1]) && av[2][0] == '*' && atoi(av[3]))
		{
			i = atoi(av[1]);
			j =  atoi(av[3]);
			printf("%d", (j * i));
		}
		else if (atoi(av[1]) && av[2][0] == '/' && atoi(av[3]))
		{
			i =  atoi(av[1]);
			j = atoi(av[3]);
			printf( "%d", (i / j));
		}
		else if (atoi(av[1]) && av[2][0] == '+' && atoi(av[3]))
		{
                        i =  atoi(av[1]);
                        j = atoi(av[3]);
                        printf( "%d", (i + j));
                }
		else if (atoi(av[1]) && av[2][0] == '%' && atoi(av[3]))
                {
                        i =  atoi(av[1]);
                        j = atoi(av[3]);
                        printf( "%d", (i % j));
                }
		else if (atoi(av[1]) && av[2][0] == '-' && atoi(av[3]))
                {
                        i =  atoi(av[1]);
                        j = atoi(av[3]);
                        printf( "%d", (i - j));
                }

	}
	printf("\n");
}

