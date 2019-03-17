#include <stdio.h>
#include <stdlib.h>


int main(void)
{

    /* int luckyNumbers[] = {4, 8 , 15, 16, 23, 42}; */
    /* luckyNumbers[1] = 200; */
    /* printf("%d\n", luckyNumbers[1]); */
    
    int luckyNumbers[10];
    luckyNumbers[1] = 80;
    printf("%d\n", luckyNumbers[1]);

    char phrase[20];
    fgets(phrase, 20, stdin);

    printf("%s\n", phrase);

    return 0;
}
