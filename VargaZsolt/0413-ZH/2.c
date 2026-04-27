#include <stdio.h>
#include <stdlib.h>

int main() {
    int szam = 0;
    int adott;
    
    printf("Adjon meg egy számot: ");
    scanf("%i",&adott);
    
    while(1) {
        if (adott == 0) {
           
            printf("A kimenet: %i\n", szam);
            return 0;
        }
        
        if ((adott % 3) == 0) {
            szam = szam - adott;
        } else {
            szam = szam + adott;
        }
        
        printf("Adjon meg egy számot: ");
        scanf("%i",&adott);
    }    
    
    return 0;
}
