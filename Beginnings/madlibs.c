#include <stdio.h>
#include <stdlib.h>

int main()
{
    char color[20];
    char pluralNoun[20];
    char celebrityF[20];
    char celebrityL[20];
    printf("Input a color, plural-noun and celebrity: ");
    scanf("%s %s %s %s", color, pluralNoun, celebrityF, celebrityL);
    printf("Roses are %s\n", color);
    printf("%s are blue\n", pluralNoun);
    printf("I love %s %s", celebrityF, celebrityL);

    return 0;
}

# If user enters 1 word for celebrity name instead of two. It will wait for second input
