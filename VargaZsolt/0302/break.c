#include <stdio.h>

int main() {
    int i;
    
    for (i=1;i<=10;i++) {
        printf("%d, ",i);
        if (i == 6) {
            break;
        }
    }
    printf("Itt vagyunk\n");
    return 0;
}
