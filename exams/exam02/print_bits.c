
#include <unistd.h>

void 	ft_putchar(char c)
{
	write(1, &c, 1);
}

void print_bits(unsigned char octet)
{
	int i;
	unsigned char bit;

	i = 8;
	while(i > 0)
	{
		i--;
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
	}
}

int main()
{	

	print_bits(2);
}