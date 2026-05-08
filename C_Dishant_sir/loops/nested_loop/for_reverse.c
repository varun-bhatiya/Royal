#include <stdio.h>

int main()
{
    int start, end, rev, rem, i, temp;
    printf("enter the start value : ");
    scanf("%d", &start);
    printf("enter the end value : ");
    scanf("%d", &end);
    for (i = start; i <= end; i++)
    {
        temp = i;
        rem = 0;
        rev = 0;
        for (; temp > 0;)
        {
            rem = temp % 10;
            rev = rev * 10 + rem;
            temp /= 10;
        }
        if (i % 10 == 0)
        {
            if (i % 100 == 0)
            {
                printf("00%d\t", rev);
            }
            else
            {
                printf("0%d\t", rev);
            }
        }
        else
        {
            printf("%d\t", rev);
        }
    }
    return 0;
}