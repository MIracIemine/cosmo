#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int n = 0;
    int i = 0;
    scanf("%d", &n);
    int count = 1;
    int arr[20][20] = {0};
    int p = 0;
    int q = n - 1;
    while (count < n * n)
    {
        for (i = p;i < q + 1;i++)
        {
            arr[p][i] = count;
            count++;
        }
        for (i = p + 1;i < q+1;i++)
        {
            arr[i][q] = count;
            count++;
        }
        for (i = q - 1;i > p - 1;i--)
        {
            arr[q][i] = count;
            count++;
        }
        for (i = q - 1;i > p;i--)
        {
            arr[i][p] = count;
            count++;
        }
        p++;
        q--;
    }
    for (i = 0;i < 4;i++)
    {
        int j = 0;
        for (j = 0;j < 4;j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}