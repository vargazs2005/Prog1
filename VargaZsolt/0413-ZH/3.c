#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prog1.h"

void rendezett(int tomb[], int meret) {
    int temp;
    for (int k=0;k<meret;k++) {
        for (int x=0;x<meret;x++) {
            if (tomb[x] > tomb[x+1]) {
                temp = tomb[x];
                tomb[x] = tomb[x+1];
                tomb[x+1] = temp;
                
            }
        }
    }
}

int main(int argc, string argv[]) {
    int szamok[argc-1];
    int szamokindex = 0;
    
    if (2 < argc && argc < 11) { //2 és 9 között jó
        //Tömbhöz adás.
        for (int i=1;i<argc;i++) {
            szamok[szamokindex] = atoi(argv[i]);
            szamokindex++;
        }
        
        for (int j=0;j<szamokindex;j++) {
            if (szamok[j] <= 0) {
                printf("A megadott számok között nem lehet nem pozitív!\n");
                return 0;
            }      
        }
        
        for (int z=0;z<szamokindex;z++) {
            szamok[z]=szamok[z] * szamok[z] * szamok[z];
        }
        rendezett(szamok, szamokindex);
        
        for (int teszt=0;teszt<szamokindex;teszt++) {
            printf("%i\n",szamok[teszt]);
        }
        
        
        
        
    } else {
    printf("Hiba: legalább 2, legfeljebb 9 parancssori argumentumot kell szerepeltetni.\n");
    return 0;
    }

    return 0;
}
