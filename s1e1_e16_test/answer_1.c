#include <stdio.h>
#define MAX 4000000

int main()
{
	int i = 1, j = 2;
	int a = i + j;
	int count = 2;
	while (1)
	{	
		if (a <= MAX)
		{	if (a % 2 == 0)
				{
					count += a;
				}
		}
		else
		{
			printf("count is %d\n", count);
			break;
		}
		i = j, j = a, a = j + i;	
	}
	return 0;
}
