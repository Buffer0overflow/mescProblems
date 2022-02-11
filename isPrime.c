#include <stdio.h>
#include <stdbool.h>


bool isPrime(int number);
int main()
{

    int prime = 0,
     notPrime = 0 ;

for ( int i = 2 ; i <= 100 ; i++)
{
    if (isPrime(i))
    {
        printf("%d is a prime number.\n",i);
        prime++;
    } else
    {
        printf("%d is not a prime number.\n",i);
        notPrime++;
    }
}

    printf("There are %d prime numbers and %d not prime numbers",prime,notPrime);


    return 0;
}

bool isPrime(int number)

{
    if (number <= 1) return false;

    for ( int i = 2 ; i <= (number / 2) ; i++)
    {
        if (number % i == 0) return false;

    }
    return true;
}
