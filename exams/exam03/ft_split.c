#include <stdlib.h>
#include <stdio.h>

char *ft_strncpy(char *str, char *str1, int n)
{
	int i = 0;
	while (str1[i] != '\0' && i < n)
	{
		str[i] = str1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char **ft_split(char *str)
{
	int i = 0;
	int word_count = 0;
	int j = 0;
	int k = 0;
	while(str[i] != '\0')
	{
		while(str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if (str[i] != '\0')
			word_count++;
		while(str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
	}
	char **out = (char **)malloc(sizeof(char *) * (word_count + 1));
	i = 0;
	while(str[i])
	{
		while(str[i] && (str[i] == ' ' || str[i] == '\t'||str[i] == '\n'))
			i++;
		j = i;
		while(str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
		if(i > j)
		{
			out[k] = (char *)malloc(sizeof(char) * ((i - j) + 1));
			ft_strncpy(out[k], &str[j], i - j);
			k++;
		}
	}
	out[k] = NULL;
	return (out);
}

int main()
{
	int i = 0;
	char str1[] = "araba kelime balık";
	char **str = ft_split(str1);
	while (str[i])
	{
		printf("%s", str[i]);
		i++;
	}
}