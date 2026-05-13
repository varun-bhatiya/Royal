#include <stdio.h>

int main()
{
    int i = 0, j, p1 = 0, p2 = 1, sum, num;
    printf("Enter the number : ");
    scanf("%d", &num);
    while (i <= num)
    {
        sum = p1 + p2;
        printf("%d\t", sum);
        p1 = p2;
        p2 = sum;
        i++;
    }
    return 0;
}