#include <stdio.h>


int height(void) {
    int h;

    do {
        printf("Height: ");
        scanf("%d", &h);
    } while (h < 1 || h > 8);

    return h;
}


int main(void) {
    int h = height();

    for (int i = 1; i <= h; i++) {

        for (int x = 0; x < h - i; x++) {
            printf(" ");
        }

        for (int j = 1; j <= i; j++) {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}