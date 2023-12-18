#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//二分查找：在一个有序数组中查找某个数字
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int x = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;

	
	while (right >= left)
	{
		int mid =left +((right-left)/2)
			//避免数据溢出
		// int mid = (left + right) / 2;
		if (arr[mid] < x)
		{
			left = mid + 1;
		}
		else if (arr[mid] > x)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了，下标：%d/n", mid);
			break;
		}

	}
	if (left > right)
	{
		printf("找不到");
	}
		return 0;
}