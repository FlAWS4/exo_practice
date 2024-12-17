/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshariar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 21:00:57 by mshariar          #+#    #+#             */
/*   Updated: 2024/12/11 21:56:26 by mshariar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*scopy(char *str, char *str1, int n)
{
	int	i = -1;
	while (++i < n)
		str[i] = str1[i];
	str[i] = '\0';
	return (str);
}

char    **ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int len = 0;
	int tab_i = 0;
	
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if (str[i])
			len++;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
	}
	char **tab = malloc(sizeof(char *) * len + 1);
	i = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		j = i;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
		if (i > j)
		{
			tab[tab_i] = malloc(sizeof(char) * (i - j) + 1);
			scopy(tab[tab_i++], &str[j], (i - j));
		}
	}
	tab[tab_i] = NULL;
	return (tab);
}
/*
#include <stdio.h>

int main()
{
    char *str = "Hello   world\nThis is a  test  ";
    char **result = ft_split(str);
    
    // Check if splitting was successful
    if (!result)
    {
        printf("Error: Memory allocation failed.\n");
        return 1;
    }

    // Print the result
    printf("Split result:\n");
    for (int i = 0; result[i] != NULL; i++) {
        printf("Word %d: \"%s\"\n", i + 1, result[i]);
    }

    // Free the allocated memory for each word
    for (int i = 0; result[i] != NULL; i++) {
        free(result[i]);
    }
    // Free the memory allocated for the array of pointers
    free(result);

    return 0;
}*/
