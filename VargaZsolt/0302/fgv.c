#include <stdio.h>

int negyzetre(int i) { 
    return i*i;
}

int main() {
    int szam;

    printf("Adjon meg egy számot: ");
    scanf("%d",&szam);
    
    
    printf("A szám négyzete: %d\n",negyzetre(szam));
    return 0;
}
