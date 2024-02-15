
char *ft_strrev(char *str)
{
	int i;
	int j;
	int tmp;

	j = 0;
	i = 0;
	while(str[i] != '\0')
		i++;

	i--;
	while(i > j)
	{
		tmp = str[j];
		str[j] = str[i];
		str[i] = tmp;

		j++;
		i--;
	}
	return (str);
}

#include <stdio.h>

int main()
{
	char str[] = "kalem";
	printf("%s", ft_strrev(str));
}