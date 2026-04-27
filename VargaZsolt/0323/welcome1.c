#include <stdio.h>
#include <string.h>
//#include "prog1.h"

#define MERET 100

int main () {
    //string nev = get_string("Add meg a neved: ");
    char nev[MERET];
    printf("Add meg a neved: ");
    fgets(nev, MERET, stdin);
    nev[strlen(nev)-1] = '\0';
    printf("Üdvözöllek %s!\n", nev);

    return 0;
}
