#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int NUM = 5; /* A constant is a number that can't be changed, best practice to uppercase constants */
    printf("%d", 90) /* This is also considered a constant*/
    printf("%d\n", num);
    num = 8;
    printf("%d", num);

    return 0;
}

/* Running will bring about an error due to an attempt at editing a constant. It will not work. */
