#include <unistd.h>

void ft_print(char c)
{
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	int i;
	
	i = 0;
	if(argc == 4)
	{
		if(argv[2][1] == '\0' && argv[3][1] == '\0')
		{
			while (argv[1][i])
			{
				if(argv[1][i] == argv[2][0])
				{
					argv[1][i] = argv[3][0];
				}
				i++;
			}	
			i = 0;
		 	while(argv[1][i] != '\0')
			{
				ft_print(argv[1][i]);
				i++;

			}
			
			
			

		} 
	}
	write(1, "\n", 1);
}