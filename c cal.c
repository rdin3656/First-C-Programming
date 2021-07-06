#include<stdio.h>

int main(){
	float num1,num2;
    int cho;
	printf("Enter first number  : ");
	scanf("%f",&num1);
	
	printf("Enter second number : ");
	scanf("%f",&num2);
	
	printf("Addition       - 1\n");
	printf("Substraction   - 2\n");
	printf("Multiplication - 3\n");
	printf("Divition       - 4\n");
	printf("Remainder      - 5\n");
	
	
	printf("Enter your choise (ex : 1) : ");
	scanf("%d",&cho);
	
	switch(cho){
		case 1:
		printf("Addition = %.2f",num1+num2);
		break;
		
		case 2:
		printf("Substraction = %.2f",num1-num2);
		break;
		
		case 3:
		printf("Multiplication = %.2f",num2*num1);
		break;
		
		case 4: 
		printf("Divition = %.2f",num1/num2);
		break;
	
		default:
		printf("Your choise is invalid");
	}
	printf("\nThank you");
	printf("\n");
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
return 0;	
}