#include<stdio.h>

int main(){
	float first, second, *p1, *p2, sum;
	
	printf("Enter two numbers to add : \n");
	scanf("%f %f",&first,&second);
	
	p1=&first;
	p2=&second;
	
	sum=*p1+*p2;
	printf("The sum = %f\n",sum);
	
	return 0;
}