#include <stdio.h>

int main() {
int szam;

printf("Adj meg egy számot: ");
scanf("%d",&szam);

if (szam < 0) {
    printf("A megadott szám (%d) kisebb mint 0, azaz negatív!\n",szam);
}
else {
    printf("A megadott szám (%d) nagyobb mint 0, azaz pozitív!\n",szam);
}

}
