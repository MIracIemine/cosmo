#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int a, b;
    int max = 0;
    int x, y = 0;
    scanf("%d %d", &a, &b);
    int arr[a][b];
    for (int i = 0;i < a;i++)
    {
        for (int j = 0;j < b;j++)
        {
            scanf("%d", &arr[i][j]);
            if (arr[i][j] > max)
            {
                max = arr[i][j];
                x = i + 1;
                y = j + 1;
            }
        }
    }

    printf("%d %d", x, y);
    return 0;
}