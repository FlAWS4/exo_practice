/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshariar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 20:02:28 by mshariar          #+#    #+#             */
/*   Updated: 2024/12/13 20:28:42 by mshariar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		max(int* tab, unsigned int len)
{
	if (len == 0)
		return (0);
	int i = 0;
	int res = 0;
	while (tab[i] && len > 0)
	{
		if(res < tab[i])
			res = tab[i];
		i++;
	}
	return (res);
}

#include <stdio.h>

int main()
{
	int	arr[20] = {10, 20, 50 , 5, 4 , 100, 80, 90, 12, 26329842, 1389119, 11118, 1032392};
	int res = max(arr, 20);
	printf("%d\n", res);
}

