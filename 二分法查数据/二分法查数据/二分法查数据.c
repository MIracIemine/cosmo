#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//���ֲ��ң���һ�����������в���ĳ������
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
			//�����������
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
			printf("�ҵ��ˣ��±꣺%d/n", mid);
			break;
		}

	}
	if (left > right)
	{
		printf("�Ҳ���");
	}
		return 0;
}