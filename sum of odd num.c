#include<stdio.h>

int main(){
	int i, n, sum=0;
	
	printf("Enter number : ");
	scanf("%d",&n);
	
	for(i=1; i<=(2*n-1); i=i+2){
		sum=sum+i;
	}
	printf("The sum is : %d\n",sum);
	return 0;
}