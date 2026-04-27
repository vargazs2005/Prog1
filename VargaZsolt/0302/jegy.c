#include <stdio.h>

int main() {
    int i;
    
    printf("Adja meg a számot: ");
    scanf("%d",&i);

    switch (i) {
        case 5:
            printf("Jeles\n");
            break;
        case 4:
            printf("Jó\n");
            break;
        case 3:
            printf("Közepes\n");
            break;
        case 2:
            printf("Elégséges\n");
            break;
        case 1:
            printf("Elégtelen\n");
            break;
        default:
            printf("Nincs ilyen osztályzat!\n");
            break;
    }
    return 0;
}
