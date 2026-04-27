#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "prog1.h"

int main (int argc, string argv[]) {
    
    printf("%s, %s\n", argv[1], argv[2]);
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int c = a+b;
    printf("A két szám összege: %d\n",c);
    
    return 0;
}
