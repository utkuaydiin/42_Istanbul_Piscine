#include <unistd.h>
#include <stdlib.h>
void ft_swap(int **map, int i, int j)
{
	int tmp;

	i = i / 2;
	tmp = map[i][j];
	map[i][j] = map[i][j+1];
	map[i][j+1] = tmp;

}
int visible_counter_rowleft(int **map, int i )
{
	int visible;
	int j;

	i = i / 2; 
	j = 0;
	visible = 0;
	while(j <= 2)
		{
			if (map[i][j] < map[i][j+1])
			{
				visible++;
				j++;
			}
			else
			return(visible);
		}
	return(visible);
}

int visible_counter_colup(int **map, int i )
{
	int visible;
	int j;

	i = i / 2; 
	j = 0;
	visible = 0;
	while(j <= 2)
		{
			if (map[j][i] < map[j+1][i])
			{
				visible++;
				j++;
			}
			else
			return(visible);
		}
	return(visible);
}
void initial_colup(int *str, int **map)
{
	int i;
	int k;
	int j;

	j = 0;
	k = 0;
	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] == 4 && i >= 0 && i <= 6)
			{
				j = i / 2;
				while(k <= 3)
				{
					map[k][j] = k + 1;
					k++;
				}
			}
		i++;
	}
	
}
void initial_coldown(int *str, int **map)
{
	int i;
	int k;
	int j;

	j = 0;
	k = 3;
	i = 8;
	while(str[i] != '\0')
	{
		if(str[i] == 4 && i >= 8 && i <= 14)
			{
				j = (i % 8) / 2 ;
				while(k >= 0)
				{
					map[k][j] = k + 1;
					k--;
				}
			}
		i++;
	}
	
}
void initial_strleft(int *str, int **map)
{
	int i;
	int k;
	int j;

	j = 0;
	k = 0;
	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] == 4 && i >= 16 && i <= 22)
			{
				j = (i % 16) / 2;
				while(k <= 3)
				{
					map[j][k] = k + 1;
					k++;
				}
			}
		i++;
	}
	
}

void initial_strright(int *str, int **map)
{
	int i;
	int k;
	int j;

	j = 0;
	k = 3;
	i = 8;
	while(str[i] != '\0')
	{
		if(str[i] == 4 && 24 >= 0 && i <= 30)
			{
				j = (i % 24) / 2 ;
				while(k >= 0)
				{
					map[j][k] = k + 1;
					k--;
				}
			}
		i++;
	}
	
}


void func_rowleft(int *str, int **map)
{
	int visible;
	int j;
	int i;

	j = 0;
	i = 0;
	visible = 0;
	while(i <= 6)
	{
		if(str[16+i] != 4)
		{
			if(str[16 + i] == visible_counter_rowleft(**map, i))
			continue;
			else 
			{
				while(visible_counter_rowleft(**map, i) > str[16+i])
					ft_swap(map, i, j);
					j++;
			}
		}
		i = i + 2;
	}

}

void func_colup(int *str, int **map)
{
	int visible;
	int i;
	int j;

	i = 0;
	visible = 0;
	while(i <= 6)
	{
		if(str[0+i] != 4)
		{
			if(str[0 + i] == visible_counter_colup(**map, i))
			continue;
			else 
			{	
				j = i;
				while(visible_counter_colup(**map, i) > str[0+i])
					ft_swap(map, j, i);
					j++;
			}
		}
		i = i + 2 ;
	}

}

void ft_main(int *str)
{
	int map[4][4];
	int i;
	int j;

	initial_coldown(str, map);
	initial_colup(str, map);
	func_colup(str, map);
	func_rowleft(str, map);
	i = 0;
	j = 0;
	while (i <= 3)
	{
		while(j <= 3)
		{
			write(1, &map[i][j], 1);
			j++;
		}
		i++;
	}
}
