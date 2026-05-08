#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b;
    printf("Enter Value of a : ");
    scanf("%d", &a);
    printf("Enter Value of b : ");
    scanf("%d", &b);

    printf("the answer is : %d", a > b && a != b);
}