#include <stdio.h>

int main()
{
    int i , j , start , end , sum;
    printf("Enter Start Number : ");
    scanf("%d",&start);
    printf("Enter End Number : ");
    scanf("%d",&end);
    i = start;
    while (i <= end)
    {
        sum = 1;
        j = 2;
        while (j < i)
        {
            if(i % j == 0)
            {
                sum += j;
            }
            j++;
        }
        if(sum == i && i != 1)
        {
            printf("%d\t",i);
        }
        i++;
    }
    
    return 0;
}