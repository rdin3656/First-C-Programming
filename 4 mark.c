#include<stdio.h>

int main(){
	float num, sum=0;
	printf("Enter four numbers\n");
	for(int i=1; i<=4; i++){
		scanf("%f",&num);
		sum=sum+num;
		
	}
	printf("Addition = %.2f\n",sum);
	printf("Average = %.2f\n",sum/4);
	return 0;
}