#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, b;
    char op;

    printf("Enter tow num: \n");
    scanf("%d%d\n", &a, &b);
    /* scanf("\n"); */
    printf("Etner the op: \n");
    scanf("%c", &op);
    printf("%d %d %c\n", a, b, op);

    switch (op) {
        case '+':
            printf("%d\n", a + b);
            break;
        case '-':
            printf("%d\n", a - b);
            break;
        case '*':
            printf("%d\n", a * b);
            break;
        case '/':
            printf("%d\n", a / b);
            break;
        default:
            printf("error op\n");
    }

    return 0;
}
