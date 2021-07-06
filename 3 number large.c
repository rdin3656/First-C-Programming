#include<stdio.h>

int main(){
	float num1, num2, num3;
	printf("Enter first number : ");
	scanf("%f",&num1);
	printf("Enter second number : ");
	scanf("%f",&num2);
	printf("Enter third number : ");
	scanf("%f",&num3);
	
	if(num1>num2&&num1>num3){
		printf("%f is largest\n",num1);
	}
	else if(num2>num1&&num2>num3){
		printf("%f is largest\n",num2);
	}
	else if(num3>num1&&num3>num2){
		printf("%f is largest\n",num3);
	}
	else if(num1==num2&&num1>num3){
		printf("%f is largest\n",num1);
	}
	else if(num1==num3&&num1>num2){
		printf("%f is largest\n",num1);
		
	}
	else if(num2==num3&&num2>num1){
		printf("%f is largest\n",num2);
	}
	else{
		printf("All numbers equal\n");
	}
	
	
	return 0; //supiri

}