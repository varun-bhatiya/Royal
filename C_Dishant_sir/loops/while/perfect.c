#include<stdio.h>

int main()
{
    int i = 2, num , sum = 1;
    printf("Enter the number : ");
    scanf("%d",&num);
    while (i < num)
    {
        if(num % i ==0)
        {
            sum += i;
        }
        i++;
    }
    if(num == sum)
    {
        printf("%d is perfect number",num);
    }
    else{
        printf("%d is not a perfect number",num);
    }
    
    return 0;
}