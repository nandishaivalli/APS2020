
#include<stdio.h>
#include<math.h>

int main()
{
    int testcase;
    scanf("%d",&testcase) ;
  
    
    for(int k = 0;k<testcase;k++)
    {

        int n,m ;
        scanf("%d%d",&n,&m);

        int ftype[50] ,price[50] ;
        for(int i =0;i<n;++i)
            scanf("%d",&ftype[i]);
        for(int i = 0;i<n;++i)
            scanf("%d",&price[i]);    

        int p[50] ;
        for(int i = 1;i<=m;++i)
            p[i] = 0;

        for(int i = 0 ;i<n;++i)
            p[ftype[i]] += price[i] ;

        int min = 99999999;

        for(int i = 1;i<=m;i++) 
        {
            if(p[i]>0 && p[i] < min)
               min = p[i] ;
        }  
       printf("%d",min) ;
           
    }
      return 0;
}  
/*
"""
testcase = int(input())
for _ in range(testcase):
    n = input().split()

    ftype = list(map(int,input().split()))
    price = list(map(int,input().split()))
 
    p = [i for i in range(m+1)]
  
    for i in range(1,m+1):
        p[i] = 0

    for i in range(n):
        p[ftype[i]] += price[i]

    min = 999999999999
    for i in p[1:]:
        if i!=0 and i < min :
            min = i
    print(min , p)
"""
 
*/