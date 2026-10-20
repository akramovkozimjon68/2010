
#include <stdio.h>

int katta(int a, int b) {
    if (a > b) {
        return a;
    }

    return b;
}

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    printf("Katta son: %d\n", katta(a, b));

    return 0;
}
