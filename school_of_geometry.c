#include<stdio.h>

int main()
{
 int test_case,k,i,key;
 scanf("%d",&test_case);
for(k=0;k<test_case;k++)
{
    int n;
    scanf("%d",&n);
    int array1[n],array2[n] ;

    for(i=0;i<n;i++)
    {
        scanf("%d",&array1[i]);
    }
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&array2[i]);
    }

    for(i=1;i<n;i++)
    {
        key = array1[i];

        int j = i-1 ;
        while (j>=0  && key< array1[j])
        {
            array1[j+1] = array1[j]; 
            j--;
        }
        array1[j+1]=key;
    }
    for(i=1;i<n;i++)
    {
        key = array2[i];

        int j = i-1 ;
        while (j>=0  && key< array2[j])
        {
            array2[j+1] = array2[j]; 
            j--;
        }
        array2[j+1]=key;
    }

     int x = 0;

     for(i =0;i<n;i++)
    {
         x = x + (array2[i] > array1[i] ?array1[i] :array2[i]) ;
    }
    
    printf("%d \n",x);

}
 return 0;
}