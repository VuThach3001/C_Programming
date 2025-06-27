/*
- In this challenge, you are to create a C program that calculates your weekly pay
- The program should ask the user to enter the number of hours worked in a week via the keyboard
- The program should display as output the gross pay, the taxes, and the net pay
- The following assumptions should be made:
    - Basic pay rate = $12.00/hr
    - Overtime (in excess of 40 hours) = time and a half
    - Tax rate:
        - 15% of the first $300
        - 20% of the next $150
        - 25% of the rest
*/

#include <stdio.h>

int main(){
    /* Declare the variables */
    unsigned int numberOfhoursWorked = 0;
    float netPay = 0;
    float tax = 0.0;
    unsigned int grossPay = 0;
    int payRate = 12;
    int payOTRate = 18;

    /* Enter the number of hours worked */
    printf("Enter your number of hours worked in a week: ");
    scanf("%d", &numberOfhoursWorked);
    /* Check the condition if it exceeds over 40 hours */
    grossPay = numberOfhoursWorked > 40 ? (payRate * 40 + (numberOfhoursWorked - 40) * payOTRate) : (payRate * numberOfhoursWorked);

    /* Tax */
    if(grossPay <= 300)
        tax = grossPay * 0.15;
    else if (grossPay <= 450)
        tax = (300 * 0.15) + ((grossPay - 300) * 0.2);
    else
        tax = (300 * 0.15) + (150 * 0.2) + ((grossPay - 450) * 0.25);

    /* Calculate the net pay */
    netPay = grossPay - tax;
    
    printf("grossPay: %d\n", grossPay);
    printf("Tax: %.2f\n", tax);
    printf("netPay: %.2f\n", netPay);




    return 0;
}