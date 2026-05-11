#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "prog1.h"


//valgrind ./a.out <-- memóriaszivárgás ellenőrzése.
int main() {
    int *tomb = malloc(3 * sizeof(int));    //Fontos a sizeof!!
                        //3 * intager méretű tömb, azaz 3 számnak elég.
    if (tomb == NULL) {
        exit(1);
    }
    tomb[0] = 11;
    tomb[1] = 22;
    tomb[2] = 33;
    
    tomb = realloc(tomb, 4 * sizeof(int));  //Fontos a sizeof!!
                        //Tömb 3-ról 4 eleműre bővítése, reallokálás.
    if (tomb == NULL) {
        exit(1);
    }
    tomb[3] = 44;
    
    return 0;
}
