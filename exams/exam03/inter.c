#include <unistd.h>



int check_doubles(char *str, char c, int pos)
{
	int i = 0;
	while(str[i] != '\0' && (i < pos || pos == -1))
	{
		if(str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int main (int argc, char **argv)
{
	if (argc == 3)
	{
		int i = 0;
		while(argv[1][i] != '\0')
		{
			if(!(check_doubles(argv[1], argv[1][i], i)) && (check_doubles(argv[2], argv[1][i], -1)))
				write(1, &argv[1][i], 1);
			i++;
		}
			
	}
	write(1, "\n", 1);
}