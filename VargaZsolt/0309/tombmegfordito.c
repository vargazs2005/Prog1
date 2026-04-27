#include <stdio.h>

void tkiiro(int n, const int tomb[]) {
    for (int i=0;i<n;i++) {
         printf("%d\n", tomb[i]);
    }
    // tomb[0] = 93;
}

void tmegford(int n, int tomb[]) {
    int i = 0;
    int j = n-1;
    int c;
    while (i < n) {
        c = tomb[i];
        tomb[i] = tomb[j];
        tomb[j] = c;
        
        i++;
        j--;
    }
}

int main() {
    int szamok[] = {7, 5, 9, 8, 32};
    int meret = 5;
    
    tmegford(meret, szamok);

    
    
    return 0;
}

//1 tömb min
//2 tömb max
//3elem benne van e
//3 ha benne van adja vissza az indexet, ha nincs, akkor -1
