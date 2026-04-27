#include <stdio.h>

int main() {
float szam;

printf("Adj meg egy számot: ");
scanf("%f",&szam);

if (szam < 0) {
    printf("A megadott szám (%f) kisebb mint 0, azaz negatív!\n",szam);
}
else if (szam==0) {
    printf("A megadott szám (%f) egyenlő nullával.\n",szam);
}
else {
    printf("A megadott szám (%f) nagyobb mint 0, azaz pozitív!\n",szam);
}
}
