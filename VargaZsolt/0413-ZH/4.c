#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "prog1.h"

#define MERET 80


int main() {
    char szoveg[MERET];
    int a = 0;
    int e = 0;
    int i = 0;
    int o = 0;
    int u = 0;
    
    printf("Adja meg a szöveget: ");
    fgets(szoveg,MERET,stdin);
    szoveg[strlen(szoveg)-1]='\0';
    
    if (strlen(szoveg) > 80) {
        printf("Hiba: a szöveg mérete nem megfelelő.\n");
        return 0;
    }
    
    for (int i = 0; i<(strlen(szoveg));i++) {
        if (szoveg[i] == 'a' || szoveg[i] == 'A') {
            a++;
        } else if (szoveg[i] == 'e' || szoveg[i] == 'E') {
            e++;
        } else if (szoveg[i] == 'i' || szoveg[i] == 'I') {
            i++;
        } else if (szoveg[i] == 'o' || szoveg[i] == 'O') {
            o++;
        } else if (szoveg[i] == 'u' || szoveg[i] == 'U') {
            u++;
        }
    }
    
    
    printf("A szövegben előforduló magánhangzók száma: \n");
    printf("a: %i db\n",a);
    printf("e: %i db\n",e);
    printf("i: %i db\n",i);
    printf("o: %i db\n",o);
    printf("u: %i db\n",u);
    



    return 0;
}
