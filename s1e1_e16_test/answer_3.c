#include<stdio.h>
#include<math.h>
//判断回文数
int judge_loop(int a)
{
	//求a的倒置数
	// 先求出a的位数
	int size = 0;
	int mod_num = 1;
	int exponent = 0;
	for (int i = 0; i<=6; i++)
	{	
		mod_num = 1;
		exponent = i+1;
		while (exponent != 0)
		{
			mod_num *= 10;
			--exponent;
		}
//		printf("mod_num is %d\n", mod_num);
		if ( a % mod_num == a )
		{	
			size = i + 1;
//			printf("%d\n", size);
			break;
		}
		else
		{
//			printf("%d\n", size);
			continue;
		}

	}
//	printf("size's size is %d\n", size);






	int b[size];
	int num_1 = 1;
	for(int i = 0; i < size; i++)
	{
		num_1 = 1;
		exponent = i;
		while(exponent != 0)
		{
			num_1 *= 10;
			--exponent;
		}
		if ( i == 0)
			b[i] = a % 10;
		else
			b[i] = (a/num_1) % 10;
//		printf("b[%d] = %d\n", i, b[i]);
	}




	mod_num = 1;
	int c = 0;
	for (int j = 0;j<size; j++)
	{
		mod_num = 1;
		exponent = size-j-1;
		while (exponent != 0)
		{
			mod_num *= 10;
			--exponent;
		}
		c += b[j] * mod_num;
//		printf("c is %d\n", c);
	}

//	printf("%d's reverge num is %d\n", a, c);

	if (a==c)
	{
		printf("%d is loop num\n",a);
		return 1;
	}
	else
	{
//		printf("%d is not loop num\n", a);
		return 0;
	}

		
		


}

int main()
{

	int a = 999, b =999;
	int plus;
	for(a;a>99;a--)
	{
		for(b;b>99;b--)
		{
			printf("a is %d, b is %d\n", a, b);
			plus = a * b;
			if (judge_loop(plus))
			{
				printf("%d is large loop num",plus);
			}
		}
	}





	return 0;
}
