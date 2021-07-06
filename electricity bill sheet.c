#include<stdio.h>

int main(){
	int unit;
	float amount1, amount2, amount3, amount4;
	printf("Enter Your Electricity Units : ");
	scanf("%d",&unit);
	
	if(unit>=0&&unit<=50){
		amount1=0.50*unit*1.2;
		printf("Your total bill is : %.2f\n",amount1);
	}
	else if(unit>50&&unit<=150){
		amount2=((unit-50)*0.75+50*0.50)*1.2;
		printf("Your total bill is : %.2f\n",amount2);
	}
	else if(unit>150&&unit<=250){
		amount3=((unit-150)*1.20+50*0.50+0.75*100)*1.2;
		printf("Your total bill is : %.2f\n",amount3);
	}
	else if(unit>250){
		amount4=((unit-250)*1.50+50*0.50+0.75*100+1.20*100)*1.2;
		printf("Your total bill is : %.2f\n",amount4);
	}
	return 0;
	
}