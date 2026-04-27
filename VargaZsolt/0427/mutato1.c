#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int x = 1;
    int y = 2;
    int z[5];
    int *p;     //mutató típusú
    int *q;     //mutató típusú
    
    p = &x;
    //q = &*p;  //Így is lehet, de
    q = p;      //A C tudja kezelni azt, hogy pointer mutat pointerrel, emaitt nem kell a *.
    printf("x=%d, y=%d, p=%d, q=%d\n",x,y,*p,*q);
    
    y = *p;
    printf("x=%d, y=%d, p=%d, q=%d\n",x,y,*p,*q);
    
    *p = 4;
    printf("x=%d, y=%d, p=%d, q=%d\n",x,y,*p,*q);
    
    *p = z[0];
    printf("x=%d, y=%d, p=%d, q=%d\n",x,y,*p,*q);
    
    z[0] = 77;
    *p = z[0];
    printf("x=%d, y=%d, p=%d, q=%d\n",x,y,*p,*q);
    
    x = 23;
    printf("x=%d, y=%d, p=%d, q=%d\n",x,y,*p,*q);
    



    return 0;
}

