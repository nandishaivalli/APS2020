#include<stdio.h>
int main()
{
    int n = 5 ,k =1;
    int BC[n+1] ;
    BC[0]=1;
    for (int i = 1;i<n+1;i++)
        BC[i] = 0;

    for (int i =0;i<n+1;i++)
    {
        int min = i>k?k:i;
        for(int j=min;j>0;j--)
        {
            BC[j] = BC[j] +BC[j-1] ;
        }
    }  

    printf("%d",BC[k]);  
}