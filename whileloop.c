#include <stdio.h>

int main() {
    int a = 4;

    while (a < 10)
    {
        printf ("a is equal to %d\n", a);
        a++;
    }
    printf ("I've finished the loop and a is equal to %d\n", a);

    return (0);
}