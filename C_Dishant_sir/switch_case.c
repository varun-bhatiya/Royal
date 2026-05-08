#include <stdio.h>

void main()
{
    int a, b, choice, result = 0;
    printf("Enter value of a : ");
    scanf("%d", &a);
    printf("Enter value of b : ");
    scanf("%d", &b);

    printf("\n1.Addition\n2.Substraction\n3.Multiplication\n4.Division\n5.Exit\n");
    printf("\nEnter Your Choice : ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        result = a + b;
        printf("Addition : %d", result);
        break;
    case 2:
        result = a - b;
        printf("Substraction : %d", result);
        break;
    case 3:
        result = a * b;
        printf("Multiplication : %d", result);
        break;
    case 4:
        result = a / b;
        printf("Division : %d", result);
        break;
    default:
        printf("Select from 1 to 4");
        break;
    }
}