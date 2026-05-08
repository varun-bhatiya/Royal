#include <stdio.h>

int main()
{
    int start, end, i, j, count;
    printf("enter the start value : ");
    scanf("%d", &start); // 1
    printf("enter the end value : ");
    scanf("%d", &end); // 1000
    if (start >= 2)
    {
        play:
        for (i = start; i <= end; i++)
        {
            count = 0;
            for (j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    count++;
                    break;
                }
            }
            if (count != 1)
            {
                printf("%d\t",i);
            }
        }
    }
    else{
        start = 2;
        goto play;
    }
    return 0;
}