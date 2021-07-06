#include<stdio.h>

int main(){
	int n,a=1;
	printf("Enter the number : ");
	scanf("%d",&n);
	
	do{
		printf("%d * %2d = %d\n",n,a,n*a);
		a++;
	}while(a<=15);
	return 0;
}