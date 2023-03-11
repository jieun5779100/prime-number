#include<stdio.h>
int main()
{
	int num = 0;
	int i = 0;
	int result = 0;
	{
		for (num = 0; num <= 100; num++)
		{
			for (i = 2; i < num; i++)
			{
				if (num % i == 0)break;
			}
			if (num == i)
			{
				result += num;
			}
		}
		printf("%d", result);
	}
}