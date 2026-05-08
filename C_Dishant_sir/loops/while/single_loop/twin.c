#include <stdio.h>

int main()
{
    int num,sum = 0, mul = 1;
    printf("Enter the number : ");
    scanf("%d",&num);
    int dup = num;
    while(num > 0)
    {
        sum += num % 10;
        mul *= num % 10;
        num /= 10;
    }
    if(sum == mul)
    {
        printf("%d is a twin number",dup);
    }
    else{
        printf("%d is not a twin number",dup);
    }

    return 0;
}