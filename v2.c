
#include <stdio.h>

int main() {
    int a[2][3];
    int yigindi = 0;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d", a[i][j]);

            if (j < 2) {
                printf(" ");
            }

            yigindi += a[i][j];
        }
        printf("\n");
    }

    printf("Yigindi: %d\n", yigindi);

    return 0;
}
