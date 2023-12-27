#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int a, b = 0;
    int sum = 0;
    scanf("%d %d", &a, &b);
    int arr[a][b];
    for (int i = 0;i < a;i++)
    {
        for (int j = 0;j < b;j++)
        {
            scanf("%d", &arr[i][j]);
            if (arr[i][j] > 0)
                sum = sum + arr[i][j];
        }
    }
    printf("%d", sum);
    return 0;
}