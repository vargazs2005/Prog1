#include <stdio.h>

int main() {
    int i;
    
    for (i=1;i<=10;i++) {
        printf("%d ",i);
        if (i == 6) {
            printf("\n");
            continue;
        }
        printf("<-- Teszt\n");
    }
    printf("Itt vagyunk\n");
    return 0;
}
