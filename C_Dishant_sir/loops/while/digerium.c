#include <stdio.h>
#include <math.h>

int main()
{
    int num, dup, len = 0, rem = 0, sum = 0, i;
    printf("Enter the number : ");
    scanf("%d", &num);
    dup = num;
    while (dup > 0)
    {
        len++;
        dup /= 10;
    }
    dup = num;
    // printf("%d\n",dup);
    for (i = len; i >= 1; i--)
    {
        rem = dup % 10;
        sum += pow(rem, i);
        printf("%d\n",sum);
        dup /= 10;
    }
    if (sum == num)
    {
        printf("%d is digerium",num);
    }
    else
    {
        printf("%d is not digerium",num);
    }
    // printf("%d \t %d",num ,sum);
    return 0;
}