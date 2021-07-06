#include<stdio.h>

int main(){
	float a, b, c;
	printf("First value : ");
	scanf("%f",&a);
	printf("Second value : ");
	scanf("%f",&b);
	printf("Third value : ");
	scanf("%f",&c);
	
	if(a==b&&a==c){
		printf("This is a Equilateral triangle\n");
	}
	else if((a==b&&a!=c) || (a==c&&a!=b) || (b==c&&b!=a)){
		printf("This is a Isosceles triangle\n");
			
	}
	else{
		printf("This is a Scalene triangle\n");
	}
	


	return 0;
	
}