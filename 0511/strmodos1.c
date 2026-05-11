#include <stdio.h>
#include <string.h>


int main() {
    char *s = "Debrecen";
    //s = d;      // Nem jó, változóként adná meg..
    //s = 'd';    // Nem jó, int-et rakna karaktertömbbe.
    //s[0] = 'd'; // Nem jó, segmentation fault.
    //*s = 'd';     // Nem jó, segmentation fault.
    
    printf("%s\n", s);

    return 0;
}
