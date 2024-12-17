/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshariar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 17:18:28 by mshariar          #+#    #+#             */
/*   Updated: 2024/12/11 17:42:12 by mshariar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		int	i = 0;
		int	j;
		unsigned char str[256] = {0};

		while (av[1][i])
		{
			j = 0;
			while (av[2][j])
			{
				if (av[1][i] == av[2][j])
				{
					if (!str[(unsigned char)av[1][i]])
					{
						write (1, &av[1][i], 1);
						str[(unsigned char)av[1][i]] = 1;
					}
				}
				j++;
			}
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
