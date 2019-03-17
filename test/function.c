#include <stdio.h>
#include <stdlib.h>

void sayHi();

int main(void)
{
    printf("Top\n");
    sayHi("Mike", 40);
    sayHi("tom", 23);
    sayHi("jhon", 70);
    printf("bottom\n");
    
    return 0;
}

void sayHi(char name[], int age) {
    printf("Hello %s, you are %d\n", name, age);
}
