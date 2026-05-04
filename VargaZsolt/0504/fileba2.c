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

    fprintf(fp, "Hello Debrecen!\n");   //Első paraméter a fájl, második az írandó szöveg.
    fprintf(fp, "3+2=%d\n",3+2);
    fprintf(fp, "Pi: %lf\n", 3.14);
    char c = 'z';
    fprintf(fp, "Egy betű: %c\n",c);



    fclose(fp);
    
    return 0;
}


//szoveg.txt:
//Ez
//Itt
//Egy
//Szöveg a fileban.
