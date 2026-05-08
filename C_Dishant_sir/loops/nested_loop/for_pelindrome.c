#include <stdio.h>

int main()
{
    int start, end, dup, rem, i, test;
    printf("enter the start value : ");
    scanf("%d", &start);
    printf("enter the end value : ");
    scanf("%d", &end);

    for (i = start; i <= end; i++)
    {
        rem = 0;
        dup = i;
        test = 0;
        for (; dup > 0;)
        {
            rem = dup % 10;
            test = test * 10 + rem;
            dup /= 10;
        }
        if(test == i)
        {
            printf("%d\t",i);
        }
    }
    return 0;
}