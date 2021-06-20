#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age); /* & is a pointer */
    printf("You are %d years old", age);
}
