#include <stdio.h>

int main()
{
    int start, end, dup, sum, i, rem;
    printf("enter the start value : ");
    scanf("%d", &start);
    printf("enter the end value : ");
    scanf("%d", &end);
    for (i = start; i <= end; i++)
    {
        dup = i;
        sum = 0;
        rem = 0;
        for (; dup > 0;)
        {
            rem = dup % 10;
            sum += rem;
            dup /= 10;
        }
        if(i % sum == 0)
        {
            printf("%d\t",i);
        }
    }
    return 0;
}