#include <stdio.h>
main() {
    int num, max_digit = -1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0)
        num *= -1;
    for (;num > 0; num /= 10) {
        int digit = num % 10;
        if (digit > max_digit) {
            max_digit = digit;
        }
    }

    printf("Max number is %d\n", max_digit);
}

