#include <stdio.h>
#include <stdlib.h>

int main()
{
    sayHi("James", 20);
    sayHi("Ben", 30);
    sayHi("Rodriquez", 33);
    return 0;
}

void sayHi(char name[], int age) {
    printf("Hi %s, you are %d\n", name, age);
}

# continuation of functions.c
