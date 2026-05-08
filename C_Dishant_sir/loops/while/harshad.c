#include<stdio.h>

int main()
{
    int sum = 0, num;
    printf("Enter the number : ");
    scanf("%d",&num);
    int dup = num;
    while(dup > 0)
    {
        sum += dup % 10;
        dup /= 10;
    }
    if(num % sum ==0)
    {
        printf("%d is harshad/niven number",num);
    }
    else{
        printf("%d is not harshad/niven number",num);
    }
    return 0;
}