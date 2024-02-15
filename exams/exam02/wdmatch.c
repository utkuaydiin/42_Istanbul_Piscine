
#include <unistd.h>

void wdmatch(char *str, char *str1)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(str[i] != '\0')
	{
		while(str1[j] != '\0')
		{
			if(str[i] == str1[j])
			{
				write(1, &str1[j], 1);
				break;
			}
			j++;
		}
		i++;
	}
}

int main(int argc, char **argv)
{
	if(argc == 3)
	{
		wdmatch(argv[1], argv[2]);
	}
	write(1, "\n", 1);
}