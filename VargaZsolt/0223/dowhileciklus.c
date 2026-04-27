#include <stdio.h>

int main() {
int i;
i = 0;

do {
    if (i==50) {
        printf("%d\n",i++);
    }
    else {
        printf("%d, ",i++);
    }

}
while (i<=50);


return 0;
}
