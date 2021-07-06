#include<stdio.h>

int main(){
	int a;
	        
            do{
           	printf("Enter the number : ");
            scanf("%d",&a);
          
            
            if(a>45){
            	break;
            }
            printf("The value is     : %d\n\n",a);
           
           	
			}while(a<45);
			
	return 0;