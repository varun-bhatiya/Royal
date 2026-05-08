#include <stdio.h>

void main()
{
    int num;
    printf("enter the number : ");
    scanf("%d", &num);

    if (num % 5 == 0 && num % 11 == 0)
    {
        printf("%d is divisible by both 5 & 11.",num);
    }
    else if (num % 5 == 0)
    {
        printf("%d is divisible by 5",num);
    }
    else if (num % 11 == 0)
    {
        printf("%d is divisible by 11",num);
    }
    else{
        printf("%d is not divisible by 5 & 11",num);
    }
}