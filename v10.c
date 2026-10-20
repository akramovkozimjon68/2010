
#include <stdio.h>
#include <string.h>

struct Mahsulot {
    char nomi[50];
    int narxi;
    int soni;
};

int main() {
    struct Mahsulot m[5];
    int engQimmat = 0;
    char qidiruv[50];
    int topildi = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%s %d %d", m[i].nomi, &m[i].narxi, &m[i].soni);

        if (m[i].narxi > m[engQimmat].narxi || i == 0) {
            engQimmat = i;
        }
    }

    scanf("%s", qidiruv);

    printf("Mahsulotlar ro'yxati:\n");

    for (int i = 0; i < 5; i++) {
        printf("%s %d %d\n", m[i].nomi, m[i].narxi, m[i].soni);
    }

    printf("\nEng qimmat mahsulot: %s\n", m[engQimmat].nomi);
    printf("Narxi: %d\n", m[engQimmat].narxi);

    for (int i = 0; i < 5; i++) {
        if (strcmp(m[i].nomi, qidiruv) == 0) {
            printf("\nMahsulot topildi!\n");
            printf("Nomi: %s\n", m[i].nomi);
            printf("Narxi: %d\n", m[i].narxi);
            printf("Soni: %d\n", m[i].soni);

            topildi = 1;
            break;
        }
    }

    if (!topildi) {
        printf("\nMahsulot topilmadi!\n");
    }

    FILE *fayl = fopen("mahsulotlar.txt", "w");

    if (fayl == NULL) {
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        fprintf(fayl, "%s %d %d\n",
                m[i].nomi, m[i].narxi, m[i].soni);
    }

    fclose(fayl);

    printf("\nMa'lumotlar mahsulotlar.txt fayliga saqlandi.\n");

    return 0;
}
