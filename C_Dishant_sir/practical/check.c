/*
 *                 *
 * *             * *
 * * *         * * *
 * * * *     * * * *
 * * * * * * * * * *
 */
/*
#include <stdio.h>

int main()
{
    int i, j, k;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        for (k = 10; k > i * 2; k--)
        {
            printf("  ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
    */

#include <stdio.h>

int main()
{
    float num, min, max, avg = 0, sum = 0;
    int cnt = 0;
    printf("Enter the number : ");
    scanf("%f", &num);
    min = num;
    max = num;
    while (num != -1)
    {
        cnt++;
        sum += num;
        if (min > num)
        {
            min = num;
        }
        if (max < num)
        {
            max = num;
        }
        printf("Enter the number : ");
        scanf("%f", &num);
    }
    avg = sum / cnt;
    printf("Sum = %.0f\nAvg = %f\nMin = %f\nMax = %f", sum, avg, min, max);
    return 0;
}