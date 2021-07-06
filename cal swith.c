#include<stdio.h>

int main(){
	float num1, num2, sub, add, mul, divi;
	int chos;
	printf("Enter your first number  : ");
	scanf("%f",&num1);
	printf("Enter your second number : ");
	scanf("%f",&num2);
	
	printf("Addition       = 1\n");
	printf("Substraction   = 2\n");
	printf("Multiplication = 3\n");
	printf("Division       = 4\n");
	
	printf("Enter the number of operator (ex = 1) : ");
	scanf("%d",&chos);
	
	switch(chos){
		case 1:
		add=num1+num2;
		printf("The addition is : %.2f\n",add);
		break;
		
		case 2:
		sub=num1-num2;
		printf("The substraction is [%.2f - %.2f] : %.2f\n",num1,num2,sub);
		break;
		
		case 3:
		mul=num1*num2;
		printf("The multiplication is : %.2f\n",mul);
		break;
		
		case 4:
		divi=num1/num2;
		printf("The division is [%.2f / %.2f]: %.2f\n",num1,num2,divi);
		break;
		
		default:
		printf("Invalid number, please enter a number between 1 and 4\n");
		break;
		
	}
	
	return 0;
	
	
	
}