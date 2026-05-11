#include <stdio.h>
#include <string.h>

int my_strlen(char *szoveg) {
    //return strlen(szoveg);    //Beépített hossz számláló.
    
    char *p = szoveg;   //Karaktertömbe rakja
    
    while (*p != 0) {   //Amíg az ASCII kód nem 0, azaz NUL, addig számolja...
        p++;
    }
    return p-szoveg;    //???????
}

int main() {
    char *s = "Debrecen";
    
    printf("%s\n",s);
    
    char *p1 = s;
    char *p2 = s + 3;
    
    printf("%c\n",*p1);
    printf("%c\n",*p2);
    
    printf("A távolság: %ld\n", p2-p1);     //Ezek a memóriacímek, a betűk a szóban. Mintha index lenne.
    printf("A távolság *: %d\n", *p2-*p1);  //*-al az ASCII értékét adja meg az adott betűnek. A kettő különbsége az ASCII táblabeli különbsége a két betűnek.
    
    
    int hossz = my_strlen(s);
    printf("A szöveg hossza: %d\n", hossz);

    return 0;
}
