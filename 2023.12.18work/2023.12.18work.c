#define  _CRT_SECURE_NO_WARNINGS
//序列中整数去重
#include<stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    scanf("%d", &a);
    int arr1[a];
    int arr2[a];
    for (int i = 0;i < a;i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (int i = 0;i < a;i++)
    {
        int flag = 1;
        for (int j = 0;j < i;j++)
        {
            if (arr2[j] == arr1[i])
            {
                flag = 0;
            }
        }
        if (flag == 1)
        {
            arr2[b] = arr1[i];
            b++;
        }
    }
    for (int i = 0;i < b;i++)
        printf("%d ", arr2[i]);
}