

#include <stdio.h>
static inline int minimum(int x,int y)
{
    return(x>y?y:x);
}
static inline int maximum(int x,int y)
{
    return(x>y?x:y);
}
int main()

{
    int testcase;
    scanf("%d", &testcase);
    for (int k = 0; k < testcase; ++k)
    {

        int n, q;
        scanf("%d %d", &n, &q);
        int a[n + 1];

        a[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &a[i]);
        }

        for (int i = 0; i < q; i++)
        {
            int x1, x2, y;
            int count = 0;
            scanf("%d%d%d", &x1, &x2, &y);

            for (int j = 1; j < n; j++)
            {
                if (y>=minimum(a[j],a[j+1]) && y<=maximum(a[j],a[j+1]))
                {
                    float m = a[j + 1] - a[j];
                    float c = -(a[j + 1] - a[j]) * j + a[j];
                    float x = (y - c) / m;
                    //printf("%f %f %f\n", m, c, x);
                    if (x >= j && x <= j + 1 && x <= x2 && x >= x1 && j != x2 && j + 1 != x1)
                    {
                        count++;
                    }
                }
            }

            printf("%d\n", count);
        }
    }
    return 0;
}