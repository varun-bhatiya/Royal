#include <stdio.h>

int main()
{
    int gross_pay = 0, anual_inc = 0, income_tax = 0, HRA = 0, DA = 0, EPF = 0, TA = 900, prof_tax = 200, basic_pay = 0, other_allowances = 0, city_tier = 0, taxable_income = 0;
    char grade;
start:
    printf("Enter Your Grade (A-F) : ");
    scanf(" %c", &grade);
    printf("Enter Your City Tier (1-3): ");
    scanf("%d", &city_tier);

    switch (grade)
    {
    case 'A':
        basic_pay = 60000;
        other_allowances = 8000;
        break;
    case 'B':
        basic_pay = 50000;
        other_allowances = 7000;
        break;
    case 'C':
        basic_pay = 40000;
        other_allowances = 6000;
        break;
    case 'D':
        basic_pay = 30000;
        other_allowances = 5000;
        break;
    case 'E':
        basic_pay = 20000;
        other_allowances = 4000;
        break;
    case 'F':
        basic_pay = 10000;
        other_allowances = 3000;
        break;
    default:
        printf("\nEnter A Valid In put (A-F).\n\n");
        grade = 0;
        break;
    }

    switch (city_tier)
    {
    case 1:
        HRA = basic_pay * 30 / 100;
        break;
    case 2:
        HRA = basic_pay * 20 / 100;
        break;
    case 3:
        HRA = basic_pay * 10 / 100;
        break;
    default:
        printf("\nEnter Valid Tier (1-3).\n\n");
        city_tier = 0;
        break;
    }

    // printf("%d %d",grade,city_tier);

    if (grade != 0 && city_tier != 0)
    {
        DA = basic_pay / 2;
        EPF = basic_pay * 11 / 100;
        // printf("basic pay : %d \nhra : %d \nda : %d \noa : %d \nta : %d \npt : %d\nepf : %d", basic_pay, HRA, DA, other_allowances, TA, prof_tax, EPF);
        gross_pay = basic_pay + HRA + DA + other_allowances + TA + prof_tax - EPF;
        // printf("\ngross pay : %d",gross_pay);
        anual_inc = gross_pay * 12;
        // printf("annual pay : %d",anual_inc);
        if (anual_inc > 0 && anual_inc <= 250000)
        {
            income_tax = 0;
        }
        else if (anual_inc > 250000 && anual_inc <= 500000)
        {
            taxable_income = anual_inc - 250000;
            income_tax = taxable_income * 5 / 100;
        }
        else if (anual_inc > 500000 && anual_inc <= 750000)
        {
            taxable_income = anual_inc - 500000;
            income_tax = taxable_income * 10 / 100 + 12500;
        }
        else if (anual_inc > 750000 && anual_inc <= 1000000)
        {
            taxable_income = anual_inc - 750000;
            income_tax = taxable_income * 15 / 100 + 37500;
        }
        else if (anual_inc > 1000000 && anual_inc <= 1250000)
        {
            taxable_income = anual_inc - 1000000;
            income_tax = taxable_income * 20 / 100 + 75000;
        }
        else if (anual_inc > 1250000 && anual_inc <= 1500000)
        {
            taxable_income = anual_inc - 1250000;
            income_tax = taxable_income * 25 / 100 + 125000;
        }
        else if (anual_inc > 1500000)
        {
            taxable_income = anual_inc - 1500000;
            income_tax = taxable_income * 30 / 100 + 187500;
        }
        else
        {
            printf("Error!");
        }
        printf("\n-------------------------------------------------------------------------------------------\n");
        printf("Gross Pay = %d\n", gross_pay);
        printf("Annual Income = %d\n", anual_inc);
        printf("Income Tax = %d", income_tax);
        printf("\n-------------------------------------------------------------------------------------------\n");
    }
    else
    {
        goto start;
    }

    return 0;
}