#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d);

int main() {
    int a1, b1, c1, d1;
    scanf("%d %d %d %d", &a1, &b1, &c1, &d1);
    int ans = max_of_four(a1, b1, c1, d1);
    printf("%d", ans);
    
    return 0;
}
int max_of_four(int a, int b, int c, int d){
   int max_of_four;
   max_of_four=a;
   if (b>a) {
   max_of_four=b;
   } 
   if (c>b) {
   max_of_four=c;
   } 
   if (d>c) {
   max_of_four=d;
   }
   return max_of_four;
    
    
    
}