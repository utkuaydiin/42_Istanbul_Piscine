
#include <unistd.h>

int check_doubles(char *str, char c, int pos)
{
	int i = 0;
	while(i < pos )
	{
		if(str[i] == c)
			return (0);
		i++;
	}
	return (1);
}


int main(int argc, char **argv)
{
	int i = 0;
	int j;
	if(argc == 3)
	{
		while(argv[1][i])
		{	
			j = 0;
			while(argv[2][j])
			{
				if(argv[1][i] == argv[1][j])
				{
					if(check_doubles(argv[1], argv[1][i], i) == 1)
					{
						write(1, &argv[1][i], 1);
						break;
					}
				}
				j++;
			}
			i++;
		}
	}

}