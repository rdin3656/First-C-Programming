#include<stdio.h>
int PrimeOrNot(int);
int main()
{
    int num1,prime;
	    	

    printf("Input a positive number : ");
    scanf("%d",&num1);
    prime = PrimeOrNot(num1);
   if(prime==1)
        printf("The number %d is a prime number.\n",num1);
   else
      printf("The number %d is not a prime number.\n",num1);
   return 0;
}
int PrimeOrNot(int n1)
{
    int i=2;
    while(i<=n1/2)
    {
         if(n1%i==0)
             return 0;
         else
             i++;
    }
    return 1;
}