#include<stdio.h>

int main(){
	int a;
	printf("Enter your month number (between 1 and 12) : ");
	scanf("%d",&a);
	
	switch(a){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		printf("31 Days\n");
		break;
		
		case 4: case 6: case 9: case 11:
		printf("30 days\n");
		break;
		
		case 2:
		printf("28 or 29 days\n");
		break;
		
		default:
		printf("Invalid month number please enter number between 1 and 12\n");
		
		
	}
	return 0;
}