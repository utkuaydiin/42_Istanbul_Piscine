int	ft_atoi_base(const char *str, int str_base)
{
	int	idx;
	int	sign;
	int	result;

	idx = 0;
	sign = 1;
	result = 0;
	if (str[idx] == '-')
	{
		sign = -1;
		idx++;
	}
	while (str[idx] != '\0')
	{
		result *= str_base;
		if (str[idx] >= '0' && str[idx] <= '9')
			result += str[idx] - '0';
		else if (str[idx] >= 'A' && str[idx] <= 'Z')
			result += str[idx] - '7';
		else if (str[idx] >= 'a' && str[idx] <= 'z')
			result += str[idx] - 'W';
		idx++;
	}
	return (result * sign);
}

#include <stdio.h>

int main()
{
	printf("%d",ft_atoi_base("012356789abcdef", 1));
}