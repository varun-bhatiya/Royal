#include <stdio.h>

int main()
{
    int num, dup, fact = 1, sum = 0, rem;
    printf("Enter the Number : ");
    scanf("%d", &num);
    dup = num;
    while (dup > 0)
    {
        rem = dup % 10;
        while (rem >= 1)
        {
            fact *= rem;
            rem--;
        }
        sum += fact;
        fact = 1;
        dup /= 10;
    }
    if (sum == num)
    {
        printf("%d is strong number.", num);
    }
    else
    {
        printf("%d is not a strong number.", num);
    }
    return 0;
}