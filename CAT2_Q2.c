// programme to calculate gross pay taxes and net pay
/*
Name:Brian Masakhwe 
Reg No:PA106/G/28765/25
*/

#include <stdio.h>
int main() {
    float hours, wage, gross_pay, taxes, net_pay;

    printf("enter hours worked in a week: ");
    scanf("%f", &hours);

    printf("Enter the hourly wage: ");
    scanf("%f", &wage);

    if (hours > 40.0) {
        float normal_pay = 40.0 * wage;
        float overtime_hours = hours - 40.0;
        float overtime_pay = overtime_hours * (1.5 * wage);
        gross_pay = normal_pay + overtime_pay;
    } else {
        gross_pay = hours * wage;
    }

    if (gross_pay > 600.0) {
        float tax_on_first = 600.0 * 0.15;
        float remaining_pay = gross_pay - 600.0;
        float tax_on_rest = remaining_pay * 0.20;
        taxes = tax_on_first+ tax_on_rest;
    } else {
        taxes = gross_pay * 0.15;
    }

    net_pay = gross_pay - taxes;

    printf("\n Your gross Pay is: $%.2f\n", gross_pay);
    printf("Taxes:     $%.2f\n", taxes);
    printf("Net Pay:   $%.2f\n", net_pay);

    return 0;
}