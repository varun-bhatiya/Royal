#include<stdio.h>

int main()
{
    int num , rev = 0;
    printf("Enter the number : ");
    scanf("%d",&num);
    int dup = num;
    while(dup > 0)
    {
        rev = (rev * 10) + (dup % 10);
        dup/=10;
    }
    if(rev == num)
    {
        printf("%d is palindrome number",num);
    }
    else
    {
        printf("%d is not palindrome number",num);
    }
    return 0;
}