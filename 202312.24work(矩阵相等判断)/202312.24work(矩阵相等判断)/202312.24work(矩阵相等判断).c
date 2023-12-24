#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int a, b = 0;
    scanf("%d %d", &a, &b);
    int arr1[a][b];
    int arr2[a][b];
    for (int i = 0;i < a;i++)
    {
        for (int j = 0;j < b;j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    for (int i = 0;i < a;i++)
    {
        for (int j = 0;j < b;j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    for (int i = 0;i < a;i++)
    {
        for (int j = 0;j < b;j++)
        {
            if (arr1[i][j] != arr2[i][j])
            {
                printf("No\n");
                return 0;
            }
        }
    }
    printf("Yes\n");
    return 0;
}