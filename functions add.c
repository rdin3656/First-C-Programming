#include<stdio.h>
int calculateSum(int num1, int num2);

int main(){
	int a, b, sum;
	printf("Enter numbers\n");
	scanf("%d %d",&a,&b);
	sum=calculateSum(a,b);
	printf("The sum = %d\n",sum);
	return 0;
}

int calculateSum(int num1, int num2){
	 int calculateSum;
	 calculateSum=num1+num2;
	 return calculateSum;
	
}