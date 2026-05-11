// Practical  : any  one.

// que :3 print  this  pattern  using nested  loop  for or while.

// *                 *
// * *             * *
// * * *         * * *
// * * * *     * * * *
// * * * * * * * * * *

// #include <stdio.h>

// int main()
// {
//     int i, j, k;
//     for (i = 1; i <= 5; i++)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             printf("* ");
//         }
//         for (k = 5; k > i; k--)
//         {
//             printf("  ");
//         }
//         for (k = 5; k > i; k--)
//         {
//             printf("  ");
//         }
//         for (j = 1; j <= i; j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

/*
que :1
Write a c program that prompts the user to enter numbers and stops only when the use enter -1 . After this
print sum  and average of the numbers, minimum and maximum number from given numbers entered by user.

For Example:  Input:  4,1,5,-1
Output:
Sum=10
Average=3.333
Minimum number=1
Maximum number=5
*/

/*
#include <stdio.h>

int main()
{
    float sum = 0, min, max, cnt = 0;
    float avg = 0, num = 0;
    printf("Enter the number : ");
    scanf("%f", &num);
    min = max = num;
again:
    if (num != -1)
    {
        cnt++;
        sum += num;
        if (num < min)
        {
            min = num;
        }
        if (max < num)
        {
            max = num;
        }
        printf("Enter the number : ");
        scanf("%f", &num);
        goto again;
    }
    else
    {
        avg = sum / cnt;
        printf("Sum = %f\nAvg = %f\nMin = %f\nMax = %f", sum, avg, min, max);
    }

    return 0;
}
*/

/*
que :2
Write a program that enters a single digit integer number and produces all possible 6-digit numbers for which the product
of their digits is equal to the entered number.
Example: "number" → 2
 •111112 → 1 * 1 * 1 * 1 * 1 * 2 = 2
 •111121 → 1 * 1 * 1 * 1 * 2 * 1 = 2
 •111211 → 1 * 1 * 1 * 2 * 1 * 1 = 2
 •112111 → 1 * 1 * 2 * 1 * 1 * 1 = 2
 •121111 → 1 * 2 * 1 * 1 * 1 * 1 = 2
 •211111 → 2 * 1 * 1 * 1 * 1 * 1 = 2
*/

#include <stdio.h>

int main()
{
    int num;
    printf("Enter the Number : ");
    scanf("%d", &num);
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            for (int k = 1; k <= 9; k++)
            {
                for (int l = 1; l <= 9; l++)
                {
                    for (int m = 1; m <= 9; m++)
                    {
                        for (int n = 1; n <= 9; n++)
                        {
                            if (i * j * k * l * m * n == num)
                            {
                                int output = i * 100000 + j * 10000 + k * 1000 + l * 100 + m * 10 + n;
                                printf("%d ",output);
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}