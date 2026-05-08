#include <stdio.h>

int main()
{
    int num, sum = 0;
    printf("Enter The number : ");
    scanf("%d", &num);
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
            // printf("");
        }
    }
    if(sum == num){
        printf("%d is a Perfect Number.",num);
    }
    else{
        printf("%d is a Not Perfect Number.",num);
    }
}