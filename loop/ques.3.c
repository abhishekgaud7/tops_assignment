#include <stdio.h>
main() {
    int numbers[10];
    int evenCount = 0, oddCount = 0;
    int sumEven = 0, sumOdd = 0;
    int i;

    printf("Enter 10 numbers:\n");

  
    for (i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    
    for (i = 0; i < 10; i++) {
        if (numbers[i] % 2 == 0) {
            evenCount++;
            sumEven += numbers[i];
        } else {
            oddCount++;
            sumOdd += numbers[i];
        }
    }

  
    printf("\nResults:\n");
    printf("a. Number of even numbers: %d\n", evenCount);
    printf("b. Number of odd numbers: %d\n", oddCount);
    printf("c. Sum of even numbers: %d\n", sumEven);
    printf("d. Sum of odd numbers: %d\n", sumOdd);

}

