#define  _CRT_SECURE_NO_WARNINGS
// ¾ØÕóÔªËØ¶¨Î»
#include <stdio.h>
int main()
{
    int a, b = 0;
    scanf("%d %d", &a, &b);
    int arr[a][b];
    for (int i = 0;i < a;i++)
    {
        for (int j = 0;j < b;j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int x, y = 0;
    scanf("%d %d", &x, &y);
    printf("%d", arr[x - 1][y - 1]);
    return 0;
}