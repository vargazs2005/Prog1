#include <stdio.h>

int tatlag (int n, const int tomb[]) {
    double ossz = 0;
    for (int i=0;i<n;i++) {
        ossz = ossz + tomb[i];
    }
    //atlag = ossz/(float)n;
    return ossz/((double)n);
}

int tosszegzo (int n, const int tomb[]) {
    int ossz = 0;
    for (int i=0;i<n;i++) {
        ossz = ossz + tomb[i];
    }
    return ossz;
}

void tkiiro(int n, const int tomb[]) {
    for (int i=0;i<n;i++) {
         printf("%d\n", tomb[i]);
    }
    // tomb[0] = 93;
}

int main() {
    int szamok[] = {7, 5, 9, 8, 32};
    int meret = 5;
    
    tkiiro(meret, szamok);
    printf("\n\n");
    printf("Az elemek összege: %d\n", tosszegzo(meret, szamok));
    
    double atlag = tatlag(meret, szamok);
    printf("Az elemek átlaga: %lf\n", atlag);
    
    
    return 0;
}//tömb elemek átlaga
