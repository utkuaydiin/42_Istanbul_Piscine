
#include <stdlib.h>

int len_int(int nbr)
{
	int len;

	len = 0;
	if(nbr < 0)
	{
		len++;
		nbr *= -1;
	}
	while(nbr > 0)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}
char *ft_itoa(int nbr)
{
	char *str;
	int len;
	len = len_int(nbr);
	str = malloc(len * sizeof(char) + 1);
	if (!str)
		return(0);
	str[len--] = '\0';
	if (nbr == 0)
	{
		str[0] = 48;
		return (str);
	}
	if (nbr < 0)
	{
		str[0] = '-';
		nbr *= -1;
	}
	while (nbr > 0)
	{
		str[len] = 48 + (nbr % 10);
		nbr /= 10;
		len--;
	}

	
	return (str);
}
#include <stdio.h>
int main()
{
	printf("%s\n", ft_itoa(214214));
}
















ARABA KELIME BALIK

KELIME ARABA 