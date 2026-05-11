#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "prog1.h"

//gcc strmasolat2.c prog1.c !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//valgrind ./a.out <-- memóriaszivárgás ellenőrzése.
int main() {
    char *s = get_string("Szó: ");      //Kicsi d
    
    printf("%s\n", s);
    
    char *t = malloc(strlen(s)+1);
    
    int hossz = strlen(s);
    for (int i=0;i<=hossz;i++) {
        t[i] = s[i];
    }
    
    t[0] = toupper(t[0]);
    
    
    
    printf("%s\n", s);
    printf("%s\n", t);

    return 0;
}
