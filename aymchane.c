#include<stdio.h>


int main() {
	
	int withdraw;
	float total;
	scanf("%d",&withdraw);
	scanf("%f",&total);
	
	if (withdraw % 5 == 0 && total >= withdraw + 0.50) {
	    printf("%.2f", total - withdraw - 0.50) ;
	}
	else
	    printf("%.2f", total);
	return 0;
}
