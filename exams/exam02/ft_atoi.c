
int ft_atoi(const char *str)
{
	int i;
	int sign;
	int res;

	i = 0;
	sign = 1;
	res = 0;
	while(str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if(str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if(str[i] == '+')
		i++;
	while(str[i] != '\0' && str[i] >= '0'&& str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * sign);
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char str[] = "   -3213s232";
	printf("%d",ft_atoi(str));
	printf("%d", atoi(str));
}