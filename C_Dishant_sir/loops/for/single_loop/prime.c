#include <stdio.h>

int main()
{
    int num, primecnt = 0;
    printf("Enter Number : ");
    scanf("%d",&num);
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            primecnt++;
            // printf("%d",primecnt);
            if(primecnt > 2){
                break;
            }
        }
    }
    if(primecnt == 2){
        printf("%d is Prime Number...",num);
    }
    else{
        printf("%d is Not a Prime Number...",num);
    }

    return 0;
}