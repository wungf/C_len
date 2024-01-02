#include<stdio.h>



int main()
{
	int count = 0;
	int i = 0;
	for(i; i < 1000; i++)
	{
		if ((i % 3 == 0) | (i % 5 == 0))
		{
			count += i;
		}
	}
	printf("count is %d\n", count);
	return count;	
}

