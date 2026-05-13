#include <stdio.h>

int main()
{
    int i = 1, j, p1 = 0, p2 = 1, sum, num;
    printf("Enter the number : ");
    scanf("%d", &num);
    printf("%d\t%d\t",p1,p2);
    do{
        sum = p1 + p2;
        printf("%d\t", sum);
        p1 = p2;
        p2 = sum;
        i++;
    }
    while (i <= num-2);
    return 0;
}