#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

// need this because there is no strrev using string.h for linux for some reason o.o
  
  char *strrev(char *str)
  {
      char *p1, *p2;

      if (! str || ! *str)
            return str;
      for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
      {
            *p1 ^= *p2;
            *p2 ^= *p1;
            *p1 ^= *p2;
      }
      return str;
  }

    char fWord[40], sWord[40], choice[5], rev[20];
    printf("Enter your first word: ");
    scanf("%s", &fWord);
    //fgets(fWord, 40, stdin); trying fgets but it leaves a new line between strings
    printf("Enter your second word: ");
    scanf("%s", &sWord);
    //fgets(sWord, 40, stdin);
    printf("Select (c)oncat, (s)wap, (r)everse: ");
    scanf("%s", &choice);
    
    if(*choice == 'c') {
        printf("%s %s", fWord, sWord);
    }
    else if(*choice == 's'){
        printf("%s %s", sWord, fWord);
    }
    else if(*choice == 'r'){
        printf("%s %s", strrev(fWord), strrev(sWord));
    }

    return 0;
}
