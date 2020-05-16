#include<stdio.h>

int main()
{
int bit1[4] = {0,0,1,1};
int bit2[4] = {0,1,0,1};

printf("AND\n");
printf("| A |B | A & B \n");
for(int i = 0 ;i<4;i++)
	printf("| %d |%d | %d \n" ,bit1[i],bit2[i] ,bit1[i] & bit2[i]);


printf("OR\n");
printf("| A |B | A | B \n");
for(int i = 0 ;i<4;i++)
	printf("| %d |%d | %d \n" ,bit1[i],bit2[i] ,bit1[i] | bit2[i]);


printf("XOR\n");
printf("| A |B | A ^ B \n");
for(int i = 0 ;i<4;i++)
	printf("| %d |%d | %d \n" ,bit1[i],bit2[i] ,bit1[i] ^ bit2[i]);

return 0;
}