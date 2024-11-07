#include <stdio.h>

/*
Author :John Makau Hellen
Reg NO:CT102/G/24730/24
Date: 2024/11/7
*/

int main() {

    float hours, wage, grossPay, taxes, netPay;

    

    // Request user input

    printf("Enter hours worked in a week: ");

    scanf("%f", &hours);

    printf("Enter hourly wage: ");

    scanf("%f", &wage);

    

    // Calculate gross pay

    if (hours > 40) {

        grossPay = (40 * wage) + ((hours - 40) * wage * 1.5);

    } else {

        grossPay = hours * wage;

    }

    

    // Calculate taxes

    if (grossPay <= 600) {

        taxes = grossPay * 0.15;

    } else {

        taxes = (600 * 0.15) + ((grossPay - 600) * 0.20);

    }

    

    // Calculate net pay

    netPay = grossPay - taxes;

    

    // Print results

    printf("Gross Pay: $%.2f\n", grossPay);

    printf("Taxes: $%.2f\n", taxes);

    printf("Net Pay: $%.2f\n", netPay);

    

    return 0;
}