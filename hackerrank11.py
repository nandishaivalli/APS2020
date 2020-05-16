#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//https://www.hackerrank.com/challenges/frequency-of-digits-1/problem
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    char str[1024];
    int freq[10],i=0;
    
    scanf("%s",str);
    for(i=0;i<10;i++)
       freq[i]=0;
    for(i=0;i<strlen(str);i++)
    {
        //printf("%c ",str[i]);
        if(str[i]=='0')
            freq[0]+=1;
        if(str[i]=='1')
            freq[1]+=1;
        if(str[i]=='2')
            freq[2]+=1;
        if(str[i]=='3')
            freq[3]+=1;
        if(str[i]=='4')
            freq[4]+=1;
        if(str[i]=='5')
            freq[5]+=1;
        if(str[i]=='6')
            freq[6]+=1;
        if(str[i]=='7')
            freq[7]+=1;
        if(str[i]=='8')
            freq[8]+=1;
        if(str[i]=='9')
            freq[9]+=1;
    }
    for(i=0;i<10;i++)
     printf("%d ",freq[i]);
    return 0;
}
