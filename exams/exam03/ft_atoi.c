

int ft_atoi(const char *str)
{
	int i = 0;
	int sign = 1;
	int result = 0;

	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
			i++;
	if(str[i] == '-')
		sign = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while(str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - 48;
		i++;
	}
	
	return (result * sign);
}

#include <stdio.h>
#include <stdlib.h>

int main ()
{
	char str[] = "-5678abc123";
	printf("%d\n",ft_atoi(str));
	printf("%d",atoi(str));
}