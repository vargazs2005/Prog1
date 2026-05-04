#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int x = 1;
    int y = 2; 
    
    const int *p;
    
    p = &x;
    printf("x=%d, y=%d, p=%d\n",x,y,*p);
    
    p = &y;
    printf("x=%d, y=%d, p=%d\n",x,y,*p);
    
    x = 97;
    y = 99;
    
    printf("x=%d, y=%d, p=%d\n",x,y,*p);
    



    return 0;
}

