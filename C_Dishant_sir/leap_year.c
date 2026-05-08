#include <stdio.h>
#include <conio.h>

void main()
{
    int year;
    printf("Enter a Year : ");
    scanf("%d", &year);

    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
    {
        printf("%d is a Leap Year",year);
    }
    else
    {
        printf("%d is not a leap year", year);
    }
}