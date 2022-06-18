#include <stdio.h>                                                                                                                                                      
#include <stdlib.h>    
#include <math.h>    
     
// slightly more functionality than 15% version, slight increase to code too    
     
int main() {    
   float p=0, f=0, x=0;    
   int i=p*100, n=0, o=0;    
       
   printf("\nEnter percentage: ");    
   scanf("%f", &p);    
   printf("\nEnter value: ");    
   scanf("%d", &o);    
   n=o;    
   printf("%.2f x %d", p, n);    
   p*n;    
   printf("\n%.2f/%.2f*%d/%.2f", p, p, n, p);    
   p/p*n/p;    
   printf("\nx = %d/%.2f", n, p);    
   n/p;    
   printf("\n%d/%.2f", n, p);    
   n/p;    
   printf("\n%d/%d", n, i);    
   f=n;    
   //printf("\n%0.f", f);    
   //printf("\n%d", i);    
   x = f/p;    
   printf("\nYour answer is: %.2f", x);    
   printf("\n%.2f times %.2f = %d", p, x, o);    
       
   return 0;    
}    
