#include <stdio.h>
#include <string.h>


int main() {
    char s[] = "Debrecen";
    
    printf("%s\n", s);
    s[0] = 'd';
    printf("%s\n", s);

    return 0;
}
