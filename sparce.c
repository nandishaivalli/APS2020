#include<stdio.h>
#include<math.h>
int lookup[50][50] ,a[] = {3,14,15,2,10,5,3,2,7} ;

// query function
int query(int arr* ,int L ,int R)
{
    int j = (int)log2(R-L+1);
    if (a[lookup[i][j]] <= a[lookup[R-(1<<j) +1][j]] ) 
     return a[lookup[L][j]] ;
    else 
       
}
int main()
{
    int j,i,n = 9;
    
    for(i=0;i<n;i++)
    {
        //initilise all 0 with same index 
        lookup[i][0] = 1 ;
        //lookup contains only indexs 
    }

    for(j = 1 ;(j<<1) <= n; j++)
    {
        for(i = 0;(i + (1<<j)-1) <n ;i++)
        {
            if (a[lookup[i][j-1]] < a[lookup[i+(1<<(j-1))][j-1]])
                lookup[i][j] = lookup[i][j-1] ;
            else 
                lookup[i][j] =  lookup[i+(1<<(j-1))][j-1];
        }
    }



    return 0;
}