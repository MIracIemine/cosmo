#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//strcpy的作用是拷贝一个数组到另一个数组，包括\0.
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello world!";
//	strcpy(arr1, arr2);//第一个参数为目的地，第二个参数为源头
//	printf("%s\n", arr1);
//	return 0;
//}


//memset的作用是把从某个字节开始往后的n个字节的内容设置为某个值
int main()
{
	char arr[] = "hello world!";
	memset(arr+6-2, 'x', 5);
	//arr后+n，表示向右偏移n个字节后开始替换，-n同理。
	printf("%s\n", arr);
	return 0;
}