//32. Accept 2 numbers and find out its sum check it size 
#include <stdio.h>
main() {
    int a,b,sum;


    printf("Enter the first number: ");
    scanf("%d",&a);

    printf("Enter the second number: ");
    scanf("%d",&b);

    sum = a + b;
    
    printf("The sum of %d and %d is: %d\n",a,b,sum);
    printf("Size of the sum: %lu bytes\n", sizeof(sum));

}

