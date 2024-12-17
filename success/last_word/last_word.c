/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshariar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 19:53:45 by mshariar          #+#    #+#             */
/*   Updated: 2024/12/12 20:45:33 by mshariar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		int i = 0;
		int last;
		int start;
		while(av[1][i])
			i++;
		if (i >= 0)
		{
			while ((av[1][i] == '\0' || av[1][i] == ' ' || av[1][i] == '\t'))
				i--;
			start = i;
			while (!(av[1][i] == ' ' || av[1][i] == '\t'))
				i--;
			last = i + 1;
			while (last <= start)
			{
			       write(1, &av[1][last], 1);
				last++;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
