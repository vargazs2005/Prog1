#include <stdio.h>

void contains(const int n[], int m, int keres) {
    int talalt = 0;
    int i = 0;
    while (i < m) {
        if (n[i] == keres){
            printf("A megadott szám (%d) megtalálható a listában.\n",keres);
            talalt = 1;
            break;
        }
        i++;
    }
    if (talalt == 0) {
        printf("A megadott szám (%d) nem található a listában.\n",keres);
    }
}



int main() {
    int lista[] = {5,6,7,2,12,56,8};
    int listahossz = 7;
    int keresett = 0;
    
    printf("Add meg a keresendő számot: ");
    scanf("%d",&keresett);
    
    contains(lista, listahossz, keresett);

    return 0;
}



//Elem benne van a listában?
