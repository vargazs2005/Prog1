#include <stdio.h>

int main() {
    int osszeg;
    osszeg = 0;
    for (int i=1;i<=10;i++) {
        if ((i % 3 == 0) || (i % 5 == 0)) {
            osszeg = osszeg + i;
        }    
    }
    printf("A számok összege: %d\n",osszeg);
    return 0;
}
