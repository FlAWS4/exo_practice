/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshariar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 18:46:04 by mshariar          #+#    #+#             */
/*   Updated: 2024/12/13 19:02:12 by mshariar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int    lcm(unsigned int a, unsigned int b)
{	
	if (a == 0 || b == 0)
		return (0);
	int n;
	
	if (a > b)
		n = a;
	else
		n = b;
	while (1)
	{
		if (n % a == 0 && n % b == 0)
			return (n);
		n++;
	}
}
/*
#include <stdio.h>

int main()
{
	int	a = 19;
	int 	b = 2032;
	int 	x = lcm(a, b);

	printf("%d\n", x);
}*/
