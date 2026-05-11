#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


int main() {
    char *s = "debrecen";      //Kicsi d
    
    char *t = malloc(strlen(s)+1);  //Lefoglalja a memóriarészt. +1 mert kell a \0-nak a hely.
    strcpy(t, s);   //Karakterről karakterre átmásolás copy, akár lehetne for ciklussal is. strcpy(hova, mit);
    t[0] = toupper(t[0]);
    
    printf("%s\n", s);
    printf("%s\n", t);
    
    free(t);    //t memóriahelyének felszabadítása

    return 0;
}
