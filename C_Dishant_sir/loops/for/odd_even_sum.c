#include <stdio.h>

int main()
{
    int num, odd_sum = 0, even_sum = 0;
    printf("Enter the number to get sum : ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            even_sum += i;
        }
        else
        {
            odd_sum += i;
        }
    }
    printf("Total Sum = %d\n", odd_sum + even_sum);
    printf("Odd Sum = %d\n", odd_sum);
    printf("Even Sum = %d\n", even_sum);

    return 0;
}