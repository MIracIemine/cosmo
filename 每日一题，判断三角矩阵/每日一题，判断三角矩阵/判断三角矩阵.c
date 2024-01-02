#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int a = 0;
    scanf("%d", &a);
    int arr[a][a];
    int flag = 1;
    for (int i = 0;i < a;i++)
    {
        for (int j = 0;j < a;j++)
        {
            scanf("%d", &arr[i][j]);
            if (i > j)
            {
                if (arr[i][j] != 0)
                {
                    flag = 0;
                    break;
                }
            }
        }
    }
    if (flag == 1)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}