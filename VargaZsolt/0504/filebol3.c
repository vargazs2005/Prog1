#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "prog1.h"
#define MAX 100

int main() {
    string filenev = "szoveg.txt";
    char sor[MAX];
    
    FILE *fp = fopen(filenev, "r");
    if (fp == NULL) {
        printf("Hiba a %s fájl megnyitásakor!\n", filenev);
        exit(1);
    }
    
    while (fgets(sor, MAX, fp) != NULL) {
        printf("%s", sor);
    }

    fclose(fp);
    
    return 0;
}


//szoveg.txt:
//Ez
//Itt
//Egy
//Szöveg a fileban.
