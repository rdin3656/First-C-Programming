#include<stdio.h>

int main(){
	int tv, vcr, re, cd, tap;
	
	printf("Enter quantity of TVs                : ");
	scanf("%d",&tv);
	printf("Enter quantity of VCRs               : ");
	scanf("%d",&vcr);
	printf("Enter quantity of REMOTE CONTROLLERs : ");
	scanf("%d",&re);
	printf("Enter quantity of CD PLAYERs         : ");
	scanf("%d",&cd);
	printf("Enter quantity of TAPE RECORDERs     : ");
	scanf("%d",&tap);
	
	printf("********************************************************\n");
	printf("*                                                      *\n");
	printf("*                      Foo Store                       *\n");
	printf("*                                                      *\n");
	printf("********************************************************\n");
	
	printf("Description                                          Rs.\n");
	printf("Total amount for TVs                 :    %14.2f\n",400*(float)tv);
	printf("Total amount for VCRs                :    %14.2f\n",220*(float)vcr);
	printf("Total amount for Remote Controllers  :    %14.2f\n",35.50*(float)re);
	printf("Total amount for CD players          :    %14.2f\n",300*(float)cd);
	printf("Total amount for Tape Recorders      :    %14.2f\n",150*(float)tap);
	float x=400*tv+220*vcr+35.50*re+300*cd+150*tap;
	printf("Net amount                           :    %14.2f\n",x);
	float y=x*8.25/100;
	printf("Sales tax                            :    %14.2f\n",y);
	float a=x+y;
	printf("Total                                :    %14.2f\n",a);
	float amo;
	printf("Amount paid                          : ");
	scanf("%f",&amo);
	printf("Change                               :    %14.2f\n",amo-a);
	printf("********************************************************\n");
	printf("*                      Thank You!                      *\n");
	printf("*                     Come  Again                      *\n");
	printf("********************************************************\n");
	
	return 0;
	
}