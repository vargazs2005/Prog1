#include <stdio.h>
#include <string.h>
#include "prog1.h"

int find_char (string text, char c) {
    int hossz = strlen(text);
    for (int i=0;i<hossz;i++) {
        if (text[i] == c) {
            return i+1;
        }
    }
    return -1;
}

int main() {
    string szoveg = "Kiskutya";
    char betu;
    printf("Add meg a keresett karaktert: ");
    scanf("%c",&betu);
    
    
    printf("A szövegben az alábbi helyen található a karakter: %d.\n", find_char(szoveg, betu));
    
    
    
    
    return 0;
}



//MEgadott szövegben van e karakter, első előfordulás helye, ha nincs akkor -1
