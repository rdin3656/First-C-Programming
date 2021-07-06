#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d);

int main(){
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d\n", ans);
    
    return 0;
}
int max_of_four(int a, int b, int c, int d){
   int max_of_four;
   max_of_four=a;
   if (b>a&&b>c&&b>d) {
   max_of_four=b;
   } 
   else if (c>a&&c>b&&c>d) {
   max_of_four=c;
   } 
   else if (d>a&&d>b&&d>c) {
   max_of_four=d;
   }
  
   return max_of_four;
    
    
    
}