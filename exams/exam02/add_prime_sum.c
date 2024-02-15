
#include <unistd.h>
#include <stdio.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}
void put_nbr(int num)
{
	if(num < 10)
	{
		ft_putchar(num % 10 + '0');
	}
	if(num >= 10)
	{
		put_nbr(num / 10);
		ft_putchar(num % 10 + '0');
	}
}
int is_prime(int num)
{
	int i = 3;
  
	if (num <= 1)
		return (0);
	if (num % 2 == 0 && num > 2)
		return (0);
	while (i <= (num / 2))
	{
		if (num % i == 0)
			return 0;
		i += 2;
	}
	return 1;
}
int main(int argc, char **argv)
{	
	if(argc == 2 && argv[1][0] != '-')
	{
	int i;
	int sum;
	int n;
	i = 0;
	n = 0;
	while(argv[1][i] != '\0')
	{
		n = n * 10 + argv[1][i] - '0';
		i++;
	}
	sum = 0;
	i = 0;
	
		while(i <= n)
		{
			if(is_prime(i) == 1)
			{
				sum = sum + i;
			}
			i++;
		}
	put_nbr(sum);
	return (0);
	}
	write(1, "0\n", 2);
	return (0);
}