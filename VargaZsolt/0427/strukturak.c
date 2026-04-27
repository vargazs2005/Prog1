#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int x;
    int y;
} Pont;     //Megadjuk az új type nevét.


void kiir(Pont p) {
    printf("P(%d, %d)\n", p.x, p.y);
}


int main() {
    Pont a = {1, 2};     //Pont lesz a "type"-ja, pl int helyett.
    a.x = 77;   //Így felülírható az első karakter...
    a.y = 99;   //Így felülírható a második karakter...
    
    kiir(a);

    return 0;
}
