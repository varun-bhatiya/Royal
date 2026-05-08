#include <stdio.h>
#include <math.h>
int main()
{
    int start = 0, end = 0, i, j, len, dup, rem, sum;
    printf("Enter the Start Number : ");
    scanf("%d", &start); //100
    printf("Enter the End Number : ");
    scanf("%d", &end); //1000
    for (i = start; i <= end; i++)
    {
        sum = 0;
        rem = 0;
        len = 0;
        dup = i; // 100
        for (; dup > 0;) //0
        {
            len++; //3
            dup /= 10; 
        }
        j = i; // j = 100
        for (; j > 0;)
        {
            rem = j % 10; //1
            sum += pow(rem, len); // 0 + 0 + 0 + 1
            j /= 10; //1
        }
        if (sum == i)
        {
            printf("%d \t", i);
        }
    }
    return 0;
}