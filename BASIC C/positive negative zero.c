// Take number from user and find it is positive or negative or zero
#include <stdio.h>
main() 
{
    int num;
    printf("Enter a number:");
    scanf("%d", &num);

    if (num > 0){
        printf("The number is positive");
    }else if (num < 0){
        printf("The number is negative");
    }else{
        printf("The number is zero");
    }
}
 
