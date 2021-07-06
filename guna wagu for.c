#include<stdio.h>

int main(){
	int a, b;
	
	printf("enter : ");
	scanf("%d",&b);
	for(a=1; a<=15; a++){
		printf("%d * %2d = %d\n",b,a,b*a);
	}
	return 0;
}