
#include <stdlib.h>

int abs(size)
{
	if(size < 0)
		return(-size);
	return (size);
}
int *ft_range(int start, int end)
{
	int *str;
	int size;
	int i;

	
	size = abs(end - start) + 1;
	str = malloc(size * sizeof(int));
	if(!str)
		return(0);
	i = 0;
	if(size == 1)
		str[0] = start;
	if(start < end)
	{
		while(i < size)
		{
			str[i] = start + i;
			i++;
		}
	}
	else if(start > end)
	{
		while(i < size)
		{
			str[i] = start - i;
			i++;
		}
	}
	return(str);
}
#include <stdio.h>

int main()
{   
	
	int *str;
    int i = 0;
    int start = 2;
    int end = 3;
    int size = abs(end - start) + 1;
    
    str = ft_range(start, end);
    while(i < size)
    {
    printf("%d, ", str[i]);
    i++;
    }
}