#include <stdio.h>

void main()
{
    printf("Find Month And Days.....");
    int choice, year;
    printf("\nEnter month Number : ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Month is January & Number Of Days are 31.");
        break;
    case 2:
        printf("Enter The Year : ");
        scanf("%d", &year);
        if (year % 4 == 0)
        {
            printf("Month is February & Number Of Days are 29.");
        }
        else
        {
            printf("Month is February & Number Of Days are 28.");
        }
        break;
    case 3:
        printf("Month is March & Number Of Days are 31.");
        break;
    case 4:
        printf("Month is April & Number Of Days are 30.");
        break;
    case 5:
        printf("Month is May & Number Of Days are 31.");
        break;
    case 6:
        printf("Month is June & Number Of Days are 30.");
        break;
    case 7:
        printf("Month is July & Number Of Days are 31.");
        break;
    case 8:
        printf("Month is August & Number Of Days are 31.");
        break;
    case 9:
        printf("Month is September & Number Of Days are 30.");
        break;
    case 10:
        printf("Month is October & Number Of Days are 31.");
        break;
    case 11:
        printf("Month is November & Number Of Days are 30.");
        break;
    case 12:
        printf("Month is December & Number Of Days are 31.");
        break;
    default:
        break;
    }
}