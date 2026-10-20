
#include <stdio.h>

int main() {
    FILE *fayl = fopen("matn.txt", "w");

    if (fayl == NULL) {
        return 1;
    }

    fputs("Salom, C dasturlash!", fayl);

    fclose(fayl);

    printf("Matn faylga yozildi.\n");

}
