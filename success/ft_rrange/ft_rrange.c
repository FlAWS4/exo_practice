/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshariar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 19:19:21 by mshariar          #+#    #+#             */
/*   Updated: 2024/12/14 21:44:29 by mshariar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int     *ft_rrange(int start, int end)
{
	int *tab;
	int i = 0;
	int step = 1;
	int pos =  end - start;


	if (pos < 0)
		pos *= -1;

	pos = pos + 1;
	tab = malloc(sizeof(int) * pos);
	if (!tab)
		return (NULL);
	if (tab)
	{
		if (end > start)
			step = -1;
		while (i < pos)
		{
			tab[i] = end;
			end = end + step;
			i++;
		}
	}
	return (tab);
}
/*
#include <stdio.h>

int	main()
{
	int i = 0;

	int *tab = ft_rrange(0, 0);
	while (i <= 3)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}*/
