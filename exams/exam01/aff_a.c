
#include <unistd.h>

void ft_write(char c)
{
	write(1, &c, 1);
}
int main(int argc, char **argv)
{
	if(argc == 2)
	{
		int i;

		i = 0;
		while(argv[1][i] != '\0')
		{
			if(argv[1][i] == 'a')
			{
				ft_write(argv[1][i]);
				break;
			}
			i++;
		}
		ft_write('\n');
	}
	else 
	ft_write('a');
}