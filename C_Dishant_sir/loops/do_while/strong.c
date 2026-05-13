#include <stdio.h>

int main()
{
    int i, j, fact, sum=0, temp, num, rem = 0;
    printf("Enter the number : ");
    scanf("%d", &num);
    temp = num;
    do
    {
        fact = 1;
        rem = temp % 10;
        do
        {
            fact *= rem;
            rem--;
        }while(rem > 1);
        // printf("%d",fact);
        sum += fact;
        temp /= 10;
    } while (temp > 0);

    if(num == sum)
    printf("%d is strong number",num);
    return 0;
}