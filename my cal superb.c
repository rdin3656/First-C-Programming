#include<stdio.h>

int main(){
	
	float a,b;
	char ch;
	printf("Enter your Numbers with operator (ex a + b) : ");
	scanf("%f %c %f",&a,&ch,&b);
	
	if(ch=='+'){
		printf("\nThe adition of %f and %f = %.2f\n",a,b,a+b);
	}
	else if(ch=='-'){
		printf("\nThe substraction of %f - %f = %.2f\n",a,b,a-b);
	}
	else if(ch=='*'){
		printf("\nThe multiple of %f and %f = %.2f\n",a,b,a*b);
	}
	else if(ch=='/'){
		printf("\nThe division of %f / %f = %.2f\n",a,b,a/b);
	}
	else{
		printf("\nInvalid operation\n");
	}
	
	printf("\n\n\nThank you\n");
	
	
	return 0;
}