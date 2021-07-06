#include<stdio.h>

int main(){
  float num1, num2, *p1, *p2;
  printf("Enter two numbers\n");
  scanf("%f %f",&num1,&num2);
  
  p1=&num1;
  p2=&num2;
  if(*p1>*p2){
  	printf("%f is big\n",*p1);
  }	
  else if(*p2>*p1){
  	printf("%f is big\n",*p2);
  }
  else{
  	printf("Both are equal\n");
  }
  return 0;
}



