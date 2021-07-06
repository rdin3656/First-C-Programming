#include<stdio.h>

int main(){
	float a;
	
	printf("Enter your number : ");
	scanf("%f",&a);
	
	if(a>0){
		printf("%.2f is a positive number\n",a);
	}
	else if(a<0){
		printf("%.2f is a negative number\n",a);
	}
	else{
		printf("Zero\n");
	}
	return 0;
}