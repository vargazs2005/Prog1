#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tipp;
    int lepes=1;
    srand(time(NULL));
    int min = 11;
    int max = 111;
    
    int randomszam = (rand() % (max-min+1) +min);
    
    printf("Adja meg a tippjét: ");
    scanf("%i",&tipp);
    
    
    
    while(1) {
        if (tipp == 0) {
            printf("Sajnálom, hogy nem sikerült kitalálni a számot.\n");
            printf("A játék során %i lépést használt fel.\n",lepes);
            return 0;
        }
        
        if (tipp > randomszam) {
            printf("A kitalálandó szám ennél kisebb.\n");
        } else if (tipp < randomszam) {
            printf("A kitalálandó szám ennél nagyobb.\n");
        } else if (tipp = randomszam) {
            printf("A kitalálandó szám pontosan ennyi. Gratulálok!\n");
            printf("A játék során %i lépést használt fel.\n",lepes);
            return 0;
        }
        
        lepes++;
        printf("Adja meg a tippjét: ");
        scanf("%i",&tipp);
    }    
    
    return 0;
}
