#include<stdio.h>

int main(){
	
	int year;
	printf("Enter your Year : ");
	scanf("%d",&year);
	
	if(year%4==0){
		printf("%d is a Leap year\n",year);
	}
	else{
		printf("%d is not a Leap year\n",year);
	}
	return 0;
}