#include<stdio.h>

int main(){
	int num;
	printf("Enter your number : ");
	scanf("%d",&num);
	
	switch(num%2==0){
		case 1:
		printf("%d is a even number\n",num);
		break;
		
		case 0:
		printf("%d is a odd number\n",num);
	}
	return 0;
}