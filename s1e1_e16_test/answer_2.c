#include <stdio.h>
#define NUM 600851475143
#include <math.h>
//求解最大质数因子
//求解一个数所有的质数因子


//函数 判断一个数是否是质数
int judge_num(int a)
{
	int i = (sqrt(a) + 1);
      	for (i; i > 1; i--)
	{
		if (a % i != 0)
		{
			continue;
		}
		else
		{
			return 0;
		}
	}
	printf("%d 是质数\n",a);
	return a;
}
int main()
{
	int a;
	int i = (sqrt(NUM) + 1);
	int max = 0;
	for (i; i > 1; i--)
	{
		if (NUM % i == 0)
		{
			if (judge_num(i) > max)
			{
				max = judge_num(i);
			}	
		}
		else
		{
			continue;
		}
	}	
}


