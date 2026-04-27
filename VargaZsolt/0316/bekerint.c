#include <stdio.h>
//#include <string.h>
#include "prog1.h"

int get_int() {
    int s;
    printf("Adjon meg egy egész számot: ");
    scanf("%d",&s);
    
    return s;
}

int main() {

    printf("A szám: %d.\n", get_int());
    
    
    return 0;
}



//Elem benne van a listában?
