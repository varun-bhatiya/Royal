/*
Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill
*/

#include <stdio.h>

void main()
{
    float units, bill = 0, surcharge = 0, total_bill = 0;

    printf("Enter Units Consumed : ");
    scanf("%f", &units);

    if (units > 0 && units <= 50)
    {
        bill = units * .5;
    }
    else if (units > 50 && units <= 150)
    {
        bill = 25 + ((units - 50) * .75);
    }
    else if (units > 150 && units <= 250)
    {
        // units = units - 150;
        bill = 25 + 75 + ((units-150) * 1.2);
    }
    else if (units > 250)
    {
        // units = units - 250;
        bill = 25 + 75 + 120 + ((units-250) * 1.5);
    }
    else{
        printf("Enter Valid Units\n");
    }
    surcharge = bill * 0.2;
    total_bill = bill + surcharge;
    
    printf("Bill : %f",total_bill);
}