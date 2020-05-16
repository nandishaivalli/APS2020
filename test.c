#include <stdio.h>
#include<math.h>
int main()
{
    for (int i =1;(1<<i)<=10;i++)
        printf("%d ",(int)pow(2,i));

    return 0;
}
/*int main()
{
    int testcase;
    int points, matches, wins;
    
    scanf("%d", &testcase);
    
    while (testcase)
    {
        wins = 0;
        scanf("%d%d", &points, &matches);
        while (wins <= points)
        {
            wins++;
            if (wins == points)
                break;
        }
      
        
        --testcase;
        printf("%d",wins/2);
    }
    
    

    return 0;
}

int main()
{
int l =11 ,r =100 ;    
int i,j,max = -100;
int xor[r-l][r-l] ;
    
    
    for (i=0;i<=r-l;i++)
        for (j=0;j<=r-l;j++)
            xor[i][j] = 0;
        
    for (i=0;i<=r-l;i++)
    {
        for (j=0;j<=r-l;j++)
        {
            if (i<j)
            {
               xor[i][j] = (l+i) ^ (l +j) ;

               if (xor[i][j] > max)
                max = xor[i][j] ;
            }
        }
    }
    
    
    
    printf("\n\n%d",max);
}





*/