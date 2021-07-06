#include<stdio.h>

int main(){
	int num, a=1;
		printf("Enter num: ");
		scanf("%d",&num);
	while(a<=num){
	
		printf("number is %d, cube is %d\n",a,a*a*a);
		a++;
	}
	return 0;
}