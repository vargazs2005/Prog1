#include <stdio.h>

//Leggyakoribb adattípusok áttekintése.

int main() {   
    //Integer
    int szam;
    szam = 10;
    
    printf("A szám: %d\n",szam);
    printf("\n");
    
    //Float
    float lebszam;
    lebszam = 27.348;
    
    printf("A lebegőpontos szám: %f\n",lebszam);
    
    //Double
    double hosszu;
    hosszu = 13.579;
    
    printf("A hosszú szám: %lf\n",hosszu);
    printf("\n");
    
    //Char
    char betu;
    betu = 'Z';
    
    printf("A betű: %c\n",betu);
    printf("\n");
    
    return 0;
}

