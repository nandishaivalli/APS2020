#include <stdio.h>
#include<conio.h>
int no_of_bit_set(int n)
{
    int count = 0;
    while(n)
    {
        count+=n&1;
        n>>=1;

    }
 return count ;
}
int min(int a,int b)
{
    return (a >b?b:a);
}

int main()
{

//printf("nand");
   int j, mask, n;
    int dp[8] = {0,0xff,0xff,0xff,0xff,0xff,0xff,0xff};
    int cost[3][3] = { {3, 2, 7},
                     {5, 1, 3},
                     {3, 7, 2} };

    n = 3;

   
     /*for(j=0;j<8;j++)
    {
       printf("%d ",dp[j]);// dp[j] ==_CRT_INT_MAX;

    }*/
    
    for (mask = 0; mask < 8; mask++)
    {
        int x = no_of_bit_set(mask);
        for (j = 0; j < n; j++)
        {
            if ((mask | ~(1 << j)) == 7)
            {
                dp[mask | 1 << j] == min(dp[mask | 1 << j], dp[mask] + cost[x][j]);
            }
        }
    }
 
 for(j=0;j<8;j++)
    {
       printf("%d ",dp[j]);// dp[j] ==_CRT_INT_MAX;

    }
    return 0;
}