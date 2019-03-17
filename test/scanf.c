#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    /* int age = 20; */
    double gpa = 1.1;
    /* printf("Enter your age: "); */
    printf("Enter your grade: ");
    /* scanf("%d", &age); */
    scanf("%lf", &gpa);
    /* printf("you are %d years old\n", age); */
    printf("you gpa are %lf\n", gpa);

    char name[20] = "asdfsfsdafas";
    printf("the name is %ld  longer\n", strlen(name));

    return 0;
}
