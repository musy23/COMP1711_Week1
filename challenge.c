#include <stdio.h>

int main() {
    int rightanswer, guess;
    rightanswer = 46;
    guess = 0;
    while (guess != rightanswer){
        printf("enter your guess: ");
        scanf("%d, &guess");
    }

    printf("Well done!\n");

    return (0);
}
