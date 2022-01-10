#include <stdio.h>
/*adding libc header file to use exit() function
 for early termination if both nums are larger than 10 */
#include <stdlib.h> 

int main()
{

    int num1, num2;

    puts("Enter two integers to compare with Number 10");
    scanf(" %d %d", &num1, &num2);

    if (num1 > 10 && num2 > 10)
    {
        printf("You entered %d & %d - Number 10 is the smallest digit", num1, num2);
        exit(0); // if both Entered numbers are greater than 10 , then 10 is smallest and program exit.
    };
    if (num1 < num2)
    {

        printf("%d is the smallest digit", num1);
    }
    else
    {
        printf("%d is the smallest digit", num2);
    }
    return 0;
};