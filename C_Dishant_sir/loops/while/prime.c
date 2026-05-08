#include <stdio.h>

int main()
{
    int i=2,num,cnt=0;
    printf("Enter the number : ");
    scanf("%d",&num);
    while(i < num)
    {
        if(num % i == 0)
        {
            cnt++;
        }
        if(cnt != 0)
        {
            printf("%d is not prime number",num);
            break;
        }
        i++;
    }
    if(cnt == 0)
    {
        printf("%d is a prime number.",num);
    }
    return 0;
}