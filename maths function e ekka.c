#include<stdio.h>
#include<math.h>
int main(){
    double a=2, x=2, b=2, z;
	
	z=(exp(a*x)-1/exp(a*x))/2+(sin(x+b))*a*log((b+x)/2);
	printf("The answer is : %lf\n",z);
	return 0;
}