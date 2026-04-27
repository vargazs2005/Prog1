#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Írjon egy eljárást, amiben pointerek segítségével visszaad 2 értéket! (Pointerrel felülírja a két értéket)
void ketprim(int *p, int *q) {
    *p = 2;
    *q = 3;   

}


int main() {
    int x = 77;
    int y = 99;
    
    
    ketprim(&x, &y); //Állítsa be X és Y-t a két legkisebb prímre.
    
    //printf("x=%d, y=%d, \np=%d, q=%d\n",x,y,*xx,*yy);
    printf("x=%d, y=%d\n",x,y);
    return 0;
}
