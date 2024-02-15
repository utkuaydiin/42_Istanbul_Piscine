
#include <stdlib.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return(i);
}

char *ft_strdup(char *src)
{
	char *arr;
	int i;
	int len;

	i = 0;
	len = ft_strlen(src);
	arr = malloc(len + 1);
	if(arr != NULL)
	{
		while(src[i] != '\0')
		{
			arr[i] = src[i];
			i++;
		}
		arr[i] = '\0';
	}
	return(arr);
}

#include <stdio.h>

int main()
{
	char str[] = "araba";
	printf("%s",ft_strdup(str));
}