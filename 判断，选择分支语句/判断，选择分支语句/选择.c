#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int test()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a % 2 == 1)
//		printf("奇数\n");
//	else
//		printf("偶数\n");
//		return 0;
//}
//int main()
//{
//	int r = test();
//	return 0;
//}
int main()
{
	int a = 1;
	while(a<=100)//for (int a = 1;a<=100;++a)//节省内存，走出for循环会删除变量，后续无法调用
	{
		int b = a % 2;
		if (b == 1)
		{
			printf("%d ", a);
		}
		++a;
	}

	return 0;
}