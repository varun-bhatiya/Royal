#include <stdio.h>

int main()
{
    int num = 0, reverse = 0 , rem = 0 ;
    printf("Enter the Number : ");
    scanf("%d",&num);
    for (; num > 0;)
    {
        rem = num % 10;
        reverse = reverse * 10 + rem;
        printf("%d\t",reverse);
        num = num / 10;
    }
    printf("Reverse = %d",reverse);
    
    return 0;
}