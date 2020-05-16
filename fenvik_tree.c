#include<stdio.h>
int bit[1000] , a[1000] ,n = 5;
void update(int i ,int value)
{
    
    for(;i<=n;i +=(i & -i)) // and with two compliment i & -i
    {
        bit[i]+=value ;
    }
}

int query(int i)
{

    int qsum = 0;
    for(;i>0;i = i-(i&-i))
    {
        qsum -=- bit[i] ;
    }

    return qsum ;
}

int main()
{
    printf("input") ;
  for(int i =1;i<=n;i++)
  {
      
      scanf("%d",&a[i]);
      update(i,a[i]);  
  }

  printf("%d\n",query(4)) ;
  printf("%d\n",query(5)) ;
  printf("%d\n1",query(3));
  return 0;
}