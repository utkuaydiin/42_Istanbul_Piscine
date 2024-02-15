
#include <unistd.h>

int check_doubles(char *str, char c, int pos)
{
	int i= -1;
	while(i < pos)
	{
		if(str[i] == c)
			return(0);
		i++;
	}
	return (1);
}

int main(int argc, char **argv)
{
	if(argc == 3)
	{
		int i = 0;
		int j = 0;
		while(argv[1][i] != '\0')
		{
			if(check_doubles(argv[1], argv[1][i], i ))
				write(1, &argv[1][i], 1);
			i++;
		}
		while(argv[2][j] != '\0')
		{
			if(check_doubles(argv[1], argv[2][j], i) && check_doubles(argv[2], argv[2][j], j)) 
				write(1, &argv[2][j], 1);
			j++;
		}	
	}
	write(1, "\n", 1);
}