#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    double arr[5][5];
    for (int i = 0;i < 5;i++)
    {
        scanf("%lf %lf %lf %lf %lf", &arr[i][0], &arr[i][1], &arr[i][2], &arr[i][3], &arr[i][4]);
    }
    for (int i = 0;i < 5;i++)
    {
        double sum = 0;
        int j = 0;
        for (j = 0;j < 5;j++)
        {
            printf("%0.1lf ", arr[i][j]);
            sum = sum + arr[i][j];
        }
        printf("%0.1lf\n", sum);
    }
    return 0;
}