#include <unistd.h>
int seenbefore(char *str, char c, int pos)
{
	int i;

	i = 0;
	while (i < pos)
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}
void ft_union(char *str, char*str1)
{
	int i;
	int j;


	i = 0;
	while(str[i] != '\0')
	{
		if(seenbefore(str, str[i], i) == 0)
			write (1, &str[i], 1);
		i++;
		
	}
	j = 0;
	while (str1[j] != '\0')
	{
		if(seenbefore(str, str1[j], i) == 0 && seenbefore(str1, str1[j], j) == 0)
			write (1, &str1[j], 1);
		j++;
	}
}
int main(int argc, char **argv)
{
	if(argc == 3)
		ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}