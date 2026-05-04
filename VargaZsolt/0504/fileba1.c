#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "prog1.h"
#define MAX 100

int main() {
    string filenev = "ki.txt";
    char sor[MAX];
    
    FILE *fp = fopen(filenev, "w");
    if (fp == NULL) {
        printf("Hiba a %s fájl megnyitásakor!\n", filenev);
        exit(1);
    }
    
    while (fgets(sor, MAX, fp) != NULL) {
        printf("%s", sor);
    }

    printf("Hello Debrecen!\n");
    printf("3+2=%d\n",3+2);
    printf("Pi: %lf\n", 3.14);
    char c = 'z';
    printf("Egy betű: %c\n",c);



    fclose(fp);
    
    return 0;
}


//szoveg.txt:
//Ez
//Itt
//Egy
//Szöveg a fileban.
