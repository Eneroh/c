#include <stdio.h>
#include <stdlib.h>

int main()
{
    int luckyNumbers[] = {4, 8, 16, 32, 64, 128};
    luckyNumbers[1] = 200;
    printf("%d", luckyNumbers[1]);
    return 0;
    
    int luckyNumbers[10];
    luckyNumbers[1] = 1;
    luckyNumbers[0] = 0;
    printf("%d", luckyNumbers[1]);
}

# separate these to have it work
