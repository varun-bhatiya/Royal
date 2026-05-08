#include <stdio.h>

int main()
{
    int num = 0, dup = 0, factorial = 1, rem = 0, sum = 0;
    printf("Enter the Number : ");
    scanf("%d", &num); // 145
    dup = num;         // 145
    for (; num > 0;)   // 145 > 0
    {
        rem = num % 10; // 5
        // printf("rem = %d\n", rem);
        for (int i = rem; i > 1; i--) // 5
        {
            factorial = factorial * i;
        }
        // printf("factorial : %d\n", factorial);

        sum = sum + factorial; // 120
        // printf("sum : %d\n", sum);
        factorial = 1; // 1
        // printf("factorial : %d\n", factorial);
        num /= 10; // 14
    }
    // printf("Sum = %d", sum);
    if (sum == dup)
    {
        printf("%d is a Strong Number.",sum);
    }
    else
    {
        printf("%d is not a Strong Number.",sum);
    }
    return 0;
}