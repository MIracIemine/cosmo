#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//筛选法求素数
int main()
{
    int a = 0;
    int c = 2;
    while ((scanf("%d", &a)) != EOF)
    {
        int arr[a - 1];
        for (int i = 0;i < a - 1;i++)
        {

            arr[i] = c;
            c++;
        }
        int count = 0;
        for (int i = 0;i < a - 1;i++)
        {
            double b = sqrt(arr[i]);
            for (int j = 2;j <= b;j++)
                if (arr[i] != 0 && arr[i] % j == 0)
                {
                    arr[i] = 0;
                    count++;
                }
        }
        for (int i = 0;i < a - 1;i++)
        {
            if (arr[i] != 0)
                printf("%d ", arr[i]);
        }
        printf("\n");
        printf("%d", count);

    }

    return 0;
}