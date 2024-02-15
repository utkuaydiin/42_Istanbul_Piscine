
#include <unistd.h>

void ft_print(char ch)
{
	write(1, &ch, 1);
}
int main (int argc, char **argv)
{
	if(argc == 2)
	{
		int i;
		int size;

		i = 0;
		while(argv[1][i] != '\0')
		{
			i++;
		}

		size = i;

		while (size >= 0)
		{
			ft_print(argv[1][size]);
			size--;
		}

	}
	ft_print('\n');
}