#include <stdio.h>

int main()
{
    int num = 0, rem = 0, sum = 0;
    printf("Enter The Number : ");
    scanf("%d", &num);
    int dup = num;
    for (; num > 0;)
    {
        rem = num % 10;
        sum = sum + rem;
        num /= 10;
    }
    if (dup % sum == 0)
    {
        printf("%d is a Harshad Number", dup);
    }
    else
    {
        printf("%d is not a Harshad Number", dup);
    }

    return 0;
}