#include <stdio.h>
#include <string.h>
#include "prog1.h"

int get_int(string szvg) {
    int s;
    printf("%s: ",szvg);
    scanf("%d",&s);
    
    return s;
}

int main() {

    printf("A szám: %d.\n", get_int("Adjon meg egy egész számot: "));
    
    
    return 0;
}



//Elem benne van a listában?
