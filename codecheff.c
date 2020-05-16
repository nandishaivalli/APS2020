#include <stdio.h>
// codecheff problem https://www.codechef.com/problems/CNOTE
int main()
{
    int t,x,y,n,c,p,k;
    int lucky ;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d%d",&x,&y,&k,&n);
        lucky = 0;
        while(n--)
        {
            scanf("%d%d",&p,&c);
            if((p>=(x-y))&&c<=k)
            lucky =1;
        }
        if(lucky ==1)
        printf("LuckyChef\n");
        else
        printf("UnluckyChef\n");
    }
}
