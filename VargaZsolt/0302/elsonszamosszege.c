#include <stdio.h>

int osszeadas(int n) { 
    int osszeg;
    for (int i=1;i<=n;i++) {
        osszeg = osszeg + i;
    }
    
    return osszeg;
}

int main() {
    int szam;

    printf("Adjon meg egy számot: ");
    scanf("%d",&szam);
    
    
    printf("Az első %d szám összege: %d\n",szam, osszeadas(szam));
    return 0;
}
