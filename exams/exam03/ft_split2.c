
#include <stdlib.h>
#include <stdio.h>


char  *ft_strncpy(char *str ,char *str1, int n)
{
	int i = 0;
	while (str1[i] && i < n)
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
	char **out;
	int k = 0;
	int j = 0;
	while(str[i])
	{
		while(str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if(str[i])
			word_count++;
		while(str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
	}

	out = (char **)malloc(sizeof(char *) * (word_count + 1));

	i = 0;
	while(str[i])
	{
		while(str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		j = i;
		while(str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			i++;
		if(j < i)
		{
			out[k] = (char *)(malloc(sizeof(char *) * ((i - j) + 1)));
			ft_strncpy(out[k], &str[j], i - j);
			k++;
		}
	}
	out[k] = NULL;
	return (out);

}

int main()
{
	char **str;
	int i = 0;
	char str1[] = "araba kelime utku";
	str = ft_split(str1);
	while (str[i] != NULL)
	{
		printf("%s",str[i]);
		i++;
	}
}