#include<stdio.h>
int BC(int n ,int k)
{
    if (n==0 || n==k)
        return 1;
    else 
        return ( BC(n-1,k-1)+BC(n-1,k));    
}
int main()
{
    int n,k;
    n=4;k=2;

    printf("%d",BC(n,k));
    return 0;
}