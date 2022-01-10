// C programming,A modern approach exercise answer - CH2 , project No.8
/*
Write a program that calculates the remaining balance on a loan after the first, second, and third monthly payments: 
Enter amount of loan: 20000.00 
 Enter interest rate: 6.0 
 Enter monthly payment: 386.66 
  Balance remaining after first payment: $19713.34 
  Balance remaining after second payment: $19425.25 
  Balance remaining after third payment: $19135.71 
*/

#include<stdio.h>

int main(void){

    float loanAmt , apr ,monthlyPayment ;

    printf("Enter amount of loan: ");
    scanf(" %f",&loanAmt);

    printf("Enter intrest rate: ");
    scanf("%f",&apr);

    printf("Enter monthly payment: ");
    scanf(" %f",&monthlyPayment);


    loanAmt = loanAmt - monthlyPayment +  (loanAmt * apr/100 / 12);
    printf("Balance remaining after first payment : %.2f\n", loanAmt);

    loanAmt = loanAmt - monthlyPayment +  (loanAmt * apr/100 / 12);
    printf("Balance remaining after second payment: %.2f\n", loanAmt);

    loanAmt = loanAmt - monthlyPayment +  (loanAmt * apr/100 / 12);
    printf("Balance remaining after third payment : %.2f", loanAmt);

    return 0;

}
