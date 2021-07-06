#include<stdio.h>

int main(){
    int i, num, mul=1;
	printf("Enter your number : ");
	scanf("%d",&num);
	
	for(i=1; i<=num; i++){
		mul=mul*i;
	}
	printf("The answer = %d\n",mul);
	return 0;
}