#include <stdio.h>

int main() {
int i;
i = 0;

while (i<=50) {
    if (i==50) {
        printf("%d\n",i++);
    }
    else {
        printf("%d, ",i++);
    }

}
return 0;
}
