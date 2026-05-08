#include <stdio.h>
// #include <math.h>
int main()
{
    int start, end, rem = 0, sum = 0, dup , count = 0;
    printf("Enter Starting Number : ");
    scanf("%d", &start);
    printf("Enter Ending Number : ");
    scanf("%d", &end);

    for (int i = start; i <= end; i++)
    {
        dup = i;
    recheck:
        sum = 0;
        rem = 0;
        for (; dup > 0;)
        {
            rem = dup % 10;
            sum += (rem * rem);
            dup /= 10;
        }
        if (sum == 1)
        {
            count++;
            printf("%d\t", i);
        }
        else if (sum == 4)
        {
        }
        else
        {
            dup = sum;
            goto recheck;
        }
    }
    printf("\nTotal Happy Numbers Between %d & %d are %d",start,end , count);
    return 0;
}