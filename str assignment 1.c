#include<stdio.h>

int main(){
	int num, count=1;
	
	do{
		printf("Enter the Number : ");
		scanf("%d",&num);
		printf("%d\n\n",num);
		count++;
	}while(count<=45);
	return 0;
}