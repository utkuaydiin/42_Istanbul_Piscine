
#include <unistd.h>

void lastword(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
		i++;
	i--;
	while(str[i] == ' ' || str[i] == '\t')
		i--;
	while(i > 0)
	{
		if(str[i] == ' ' || str[i] == '\t')
			break;
		i--;
	}
	i++;
	while(str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}

}
int main(int argc, char **argv)
{
	if(argc == 2)
		lastword(argv[1]);
	write(1, "\n", 1);
}