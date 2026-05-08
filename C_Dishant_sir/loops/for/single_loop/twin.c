#include <stdio.h>

int main()
{
    int sum = 0, mul = 1, num = 0, rem = 0;
    printf("Enter the Number : ");
    scanf("%d",&num);
    int dup = num;
    for (; num > 0;)
    {
        rem  = num % 10;
        sum += rem;
        mul *= rem;
        num /= 10;
    }
    if (sum == mul)
    {
        printf("%d is a twin number.",dup);
    }
    else
    {
        printf("%d is not a twin number.",dup);
    }
    
    
    return 0;
}