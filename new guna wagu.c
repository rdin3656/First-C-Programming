#include<stdio.h>

int main(){
	int i, num, row;
	printf("Enter no : ");
	scanf("%d",&num);
	printf("row : ");
	scanf("%d",&row);
	for(i=1; i<=row; i++ ){
		printf("%d * %2d = %d",num,i,num*i);
		printf("\n");
	}
	return 0;
}