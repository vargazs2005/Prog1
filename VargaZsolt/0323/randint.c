#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "prog1.h"

int main () {
    int i = rand();
    int j = i % 10;
    
    printf("%d, %d, %d\n", i, RAND_MAX, j);
    
    
    return 0;
}
