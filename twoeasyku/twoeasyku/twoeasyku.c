#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//strcpy�������ǿ���һ�����鵽��һ�����飬����\0.
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello world!";
//	strcpy(arr1, arr2);//��һ������ΪĿ�ĵأ��ڶ�������ΪԴͷ
//	printf("%s\n", arr1);
//	return 0;
//}


//memset�������ǰѴ�ĳ���ֽڿ�ʼ�����n���ֽڵ���������Ϊĳ��ֵ
int main()
{
	char arr[] = "hello world!";
	memset(arr+6-2, 'x', 5);
	//arr��+n����ʾ����ƫ��n���ֽں�ʼ�滻��-nͬ��
	printf("%s\n", arr);
	return 0;
}