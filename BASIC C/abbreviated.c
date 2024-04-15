#include <stdio.h>

int main()
{
    char fname[20], mname[20], lname[20];

      /* Read the full name */

     printf("Enter full school name in this format (first middle last): ");

     scanf("%s %s %s", fname, mname, lname);

      /* print abbreviated name */

     printf("Abbreviated School name is %c. %c. %s\n", fname[0], mname[0], lname);
    return 0;
}
