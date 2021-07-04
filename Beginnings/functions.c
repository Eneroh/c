#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Top\n");
    sayHi();
    printf("\nBottom");
    return 0;
}

void sayHi() {
    printf("Hi User");
}
