#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int test()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a % 2 == 1)
//		printf("����\n");
//	else
//		printf("ż��\n");
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
	while(a<=100)//for (int a = 1;a<=100;++a)//��ʡ�ڴ棬�߳�forѭ����ɾ�������������޷�����
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