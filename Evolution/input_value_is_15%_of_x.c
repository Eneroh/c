#include <stdio.h>
#include <stdlib.h>
#include <math.h>
   int main() {
   int n = 0;
   float p=0.15, f=(float) n, x=0;
   int i=p*100;
   {
    printf("Insert value is 15%% of x");
    printf("\nEnter value: ");
    scanf("%d", &n);
    printf("%.2f x %d", p, n);
    printf("\n%.2f/%.2f*x %d/%.2f", p, p, n, p);
    printf("\nx = %d*x/%.2f", n, p);
    printf("\n%d/%.2f", n, p);
    printf("\n%d/%d", n, i);
    f=n;
    printf("\n%0.f", f);
    printf("\n%d", i);
    x = f/i;
    printf("%f", f);
    printf("%d", i);                                                                                                                                                                                                       
    printf("\n%.2f", x);
  }
  return 0;
}
/* Shoutout to my boi, Ant */
