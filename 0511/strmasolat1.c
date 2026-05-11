#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
//#include "prog1.h"


int main() {
    char *s = "debrecen";      //Kicsi d
    
    
    
    printf("%s\n", s);
    printf("%p\n", s);      //memóriacím
    printf("%p\n", &s[0]);  //memóriacím

    return 0;
}
