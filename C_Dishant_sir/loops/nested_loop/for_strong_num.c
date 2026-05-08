#include <stdio.h>

int main()
{
    int start, end, i, fact, rem, dup, sum, j;
    printf("enter the start value : ");
    scanf("%d", &start);
    printf("enter the end value : ");
    scanf("%d", &end);

    for (i = start; i <= end; i++)
    {
        dup = i;
        sum = 0;
        for(;dup > 0;) //145
        {
            fact = 1;
            rem = dup % 10; //4
            for(j = rem ; j > 1 ; j--)
            {
                // fact = 1;
                fact *= j;
            }
            sum += fact;
            dup /= 10;
        }
        if(sum == i){
            printf("%d\t",i);
        }
    }
    return 0;
}