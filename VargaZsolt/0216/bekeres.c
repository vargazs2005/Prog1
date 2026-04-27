#include <stdio.h>

int main() {

    int szam1;
    int szam2;
    printf("Adja meg az első számot: ");
    scanf("%d",&szam1);
    printf("Adja meg a második számot: ");
    scanf("%d",&szam2);

    printf("\n");

    printf("A két szám összege: %d\n",szam1+szam2); 
    printf("A két szám különbsége: %d\n",szam1-szam2);    
    printf("A két szám szorzata: %d\n",szam1*szam2);
    printf("A két szám hányadosa: %d\n",szam1/szam2);
    return 0;
}

