#include<stdio.h>

int main(){
    int m;
	printf("Enter your Number : ");
	scanf("%f",&m);
	
	switch(m>0){
		case 1:
		printf("n is 1\n");
		break;
		
		case 0:
		switch(m<0){
			case 1:
			printf("n is -1\n");
			break;
			
			case 0:
			printf("n is 0\n");
			break;
		}
		

		
		
	}
	
	return 0;
}