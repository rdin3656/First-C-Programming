#include<stdio.h>

int main(){
	char ch;
	
	printf("Enter letter : ");
	scanf("%c",&ch);
	
	switch(ch){
		case 'r': case'R':
		printf("RED\n");
		break;
		
		case 'g': case'G':
		printf("GREEN\n");
		break;
		
		case 'b': case'B':
		printf("BLUE\n");
		break;
		
		default:
		printf("BLACK\n");
		
	}
	return 0;
}