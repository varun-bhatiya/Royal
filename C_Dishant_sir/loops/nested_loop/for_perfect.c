#include <stdio.h>

int main()
{
    int start, end, i, j, sum;
    printf("enter the start value : ");
    scanf("%d", &start);
    printf("enter the end value : ");
    scanf("%d", &end);
    for (i = start; i <= end; i++)
    {
        sum = 0;
        for (j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                sum += j;
            }
        }
        if (sum == i)
        {
            printf("%d\t", i);
        }
    }
    return 0;
}