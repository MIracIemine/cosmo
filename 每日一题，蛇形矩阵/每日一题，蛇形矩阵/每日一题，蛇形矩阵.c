#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int n, i = 0;
    scanf("%d", &n);
    int arr[n][n];
    int count = 1;
    int row = 0;
    int col = 0;
    while (count <= n * n)
    {
        for (int i = 0; i < 2; i++)
        {
            if (row < n && col < n)
                arr[row][col] = count++;
            col++;
        }
        col--;
        while (col)
        {
            col--;
            row++;
            if (row < n && col < n)
            {
                arr[row][col] = count++;
            }
        }
        row++;
        while (row)
        {
            if (row < n && col < n)
                arr[row][col] = count++;
            row--;
            col++;
        }

    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
    return 0;

}