#include <stdio.h>

int main()
{
    int start, end, i, sum, mul, rem, temp;
    printf("enter the start value : ");
    scanf("%d", &start);
    printf("enter the end value : ");
    scanf("%d", &end);
    for (i = start; i <= end; i++)
    {
        temp = i;
        sum = 0;
        mul = 1;
        for (; temp > 0;)
        {
            rem = temp % 10;
            sum += rem;
            mul *= rem;
            temp /= 10;
        }
        if(mul == sum){
            printf("%d\t",i);
        }
    }
}