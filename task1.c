#include <stdio.h>

int main() {
    int num, i, fact = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);



    if (num < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        for (i = 1; i <= num; i++) {
            fact *= i;
        }


        printf("Factorial of %d is: %lld\n", num, fact);
    }


    return 0;
}
