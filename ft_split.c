#include <stdlib.h>

char *ft_strncpy(char *dest, char *src, int n)
{
	int i = -1;
	while (++i < n)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

char    **ft_split(char *str)
{
	char **tab;
	int i = 0;
       	int len = 0;
	int start = 0;
	int tab_i = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if (str[i])
			len++;
		while (str[i] && str[i] != '\t' && str[i] != ' ' && str[i] != '\n')
			i++;
	}
	tab = malloc(sizeof(char *) * len + 1);
	i = 0;
	while (str[i])
	{
		 while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
		 	i++;
		start = i;
       		while (str[i] && str[i] != '\t' && str[i] != ' ' && str[i] != '\n')
			i++;
		if (start < i)
		{
			tab[tab_i] = malloc(sizeof(char *) * (i - start) + 1);
			ft_strncpy(tab[tab_i++], &str[start], (i - start));
		}
	}
	tab[i] = NULL;
	return (tab);
}

#include <stdio.h>

int main()
{
    char *str = "Hello   world\nThis is a  test  ";
    char **result = ft_split(str);

    if (!result)
    {
        printf("Error: Memory allocation failed.\n");
        return 1;
    }
    printf("Split result:\n");
    for (int i = 0; result[i] != NULL; i++) {
        printf("Word %d: \"%s\"\n", i + 1, result[i]);
    }

    for (int i = 0; result[i] != NULL; i++) {
        free(result[i]);
    }
    free(result);

    return 0;
}
