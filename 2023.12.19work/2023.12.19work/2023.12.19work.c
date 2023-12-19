#define  _CRT_SECURE_NO_WARNINGS
//查找数字出现的次数
#include <stdio.h>

int main()
{
    int a = 0;
    scanf("%d", &a);
    int arr[a];
    for (int i = 0;i < a;i++)
    {
        scanf("%d", &arr[i]);
    }
    int b = 0;
    int count = 0;
    scanf("%d", &b);
    for (int i = 0;i < a;i++)
    {
        if (b == arr[i])
            count++;
    }
    printf("%d", count);
    return 0;
}