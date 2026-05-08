#include <stdio.h>

int main()
{
    int num = 0, duplicate = 0, rev = 0, rem = 0;
    printf("Enter the Number : ");
    scanf("%d", &num);
    duplicate = num;

    for (; num > 0;)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    // printf("%d = %d\n",duplicate,rev);
    if (duplicate == rev)
    {
        printf("%d is palindrom number", rev);
    }
    else
    {
        printf("%d is not a palindrom number", rev);
    }

    return 0;
}