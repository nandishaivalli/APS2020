#include <stdio.h>
int main()
{
    int n = 4, k = 1;
    int i, j;
    int BC[10][10];

   /// printf("BC");
    for (i = 0; i <n; i++)
    {
        int min = (i > k ? k : i);
        for (j = 0; j < min; j++)
        {
            if (j == 0 || j == i)
                BC[i][j] == 1;
            else
                BC[i][j] = BC[i - 1][j - 1] + BC[i - 1][j];
        }
    }
    printf("%d", BC[n][k]);
    return 0;
}