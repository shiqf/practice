#include <stdio.h>

int main(void)
{
    int array[16];
    printf("Enter the numbers from 1 to 16 in any order: ");
    int i, j;
    for (i = 0; i < 16; ++i) {
        scanf("%d", &array[i]);
    }

    printf("Row sums: ");
    for (i = 0; i < 4; ++i) {
        int Row = 0;
        for (j = 0; j < 4; ++j) {
            Row += array[i * 4 + j];
        }
        printf("%d ", Row);
    }
    printf("\n");

    printf("Column sums: ");
    for (i = 0; i < 4; ++i) {
        int Column = 0;
        for (j = 0; j < 4; ++j) {
            Column += array[i + 4 * j];
        }
        printf("%d ", Column);
    }
    printf("\n");

    int Diagonal = 0;
    printf("Diagonal sums: ");
    for (i = 0; i < 4; ++i) {
        for (j = 0; j < 4; ++j) {
            if (i == j) 
                Diagonal += array[i * 4 + j];
        }
    }
    printf("%d ", Diagonal);

    Diagonal = 0;
    for (i = 0; i < 4; ++i) {
        for (j = 0; j < 4; ++j) {
            if (i + j == 3) 
                Diagonal += array[i * 4 + j];
        }
    }
    printf("%d\n", Diagonal);

    return 0;
}
