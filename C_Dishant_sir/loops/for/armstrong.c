#include <stdio.h>
#include <math.h>

int main()
{
    int length = 0, num = 0, dup1, dup2, rem = 0, sum = 0;
    printf("Enter the number : ");
    scanf("%d", &num);
    dup1 = num;
    dup2 = num;
    for (; num > 0;)
    {
        length++;
        num /= 10;
    }
    for (; dup1 > 0;)
    {
        rem = dup1 % 10;
        sum = sum + pow(rem, length);
        dup1 /= 10;
    }
    if (dup2 == sum)
    {
        printf("%d is armstrong Number.", dup2);
    }
    else
    {
        printf("%d is not armstrong Number.", dup2);
    }

    return 0;
}