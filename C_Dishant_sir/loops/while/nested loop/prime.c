#include <stdio.h>

int main()
{
    int start , end , i , j , cnt = 0 , cnt1 = 0;
    printf("Enter Start Number : ");
    scanf("%d",&start);
    printf("Enter End Number : ");
    scanf("%d",&end);
    i = start;
    while (i <= end)
    {
        cnt = 0;
        j = 2;
        while (j < i)
        {
            if(i % j == 0)
            {
                cnt++;
                break;
            }
            j++;
        }
        if(cnt == 0 && i != 1)
        {
            cnt1++;
            printf("%d\t",i);
        }
        i++;
    }
    // printf("\n%d",cnt1);
    return 0;
}