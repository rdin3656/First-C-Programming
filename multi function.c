#include<stdio.h>
float multiplication(float a, float b);
int main(){
	float num1, num2, mul;
	printf("Enter numbers\n");
	scanf("%f %f",&num1,&num2);
	mul=multiplication(num1,num2);
	printf("The answer is : %f\n",mul);
	
	return 0;
	
	
}
float multiplication(float a, float b){
	float multiplication;
	multiplication=a*b;
	return multiplication;
	
}