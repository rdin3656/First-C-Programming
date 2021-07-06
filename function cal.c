#include<stdio.h>
int calculateSum(int a, int b);
int calculateSub(int a, int b);
int calculatemul(int a, int b);
int calculatediv(int a, int b);
int calculateRe(int a, int b);

int main(){
	int num1, num2, sum, mul, remai, sub, devi;
	char ch;

	printf("Enter numbers with operater [ex: num1(space)operator(space)num2]\n");
	scanf("%d %c %d",&num1,&ch,&num2);
	if(ch=='+'){
		sum=calculateSum(num1, num2);
		printf("The answer = %d\n",sum);
	}
	else if(ch=='-'){
		sub=calculateSub(num1, num2);
		printf("The answer = %d\n",sub);
	}
	else if(ch=='*'){
		mul=calculatemul(num1, num2);
		printf("The answer = %d\n",mul);
	}
	else if(ch=='/'){
		devi=calculatediv(num1, num2);
		printf("The answer = %d\n",devi);
	}
	else if(ch=='%'){
		remai=calculateRe(num1, num2);
		printf("The answer = %d\n",remai);
	}
	else{
		printf("Invalid\n");
	}
	
}
int calculateSum(int a, int b){
  int calculateSum;
  calculateSum=a+b;
  return calculateSum;	
}
int calculateSub(int a, int b){
  int calculateSub;
  calculateSub=a-b;
  return calculateSub;	
}
int calculatemul(int a, int b){
  int calculatemul;
  calculatemul=a*b;
  return calculatemul;	
}
int calculatediv(int a, int b){
  int calculatediv;
  calculatediv=a/b;
  return calculatediv;	
}
int calculateRe(int a, int b){
  int calculateRe;
  calculateRe=a%b;
  return calculateRe;	
}