
#include <stdio.h>

int main() {
    int x = 15;
    int *n = &x;

    *n = 25;

    printf("Yangi qiymat: %d\n", x);

    return 0;
}
