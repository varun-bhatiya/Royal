/*
 *
 * *
 * * *
 * * * *
 * * * * *
 * * * *
 * * *
 * *
 *
 */

/*

#include <stdio.h>
int main()
{
    int i, j, k;

    for (i = 1; i <= 5; i++) // 1  1 <=5
    {
        for (k = 5; k > i; k--) // 5  5 >1
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (i = 1; i <= 5; i++) // 3  3 <=5
    {
        if (i != 1)
        {
            for (k = 1; k < i; k++) // k=2  2 < 3
            {
                printf(" ");
            }
            for (j = 5; j >= i; j--) //  j=5  5 >=3
            {
                printf("* "); // * * * * *
            } //    * * * *
            printf("\n"); //      * * *
        }
    }
    return 0;
}

*/
/*
1 2 3 4 5
  1 2 3 4
    1 2 3
      1 2
        1
*/

/*
#include <stdio.h>

int main()
{
    int i ,j , k , l;
    for(i = 1 ; i<= 5 ; i++)
    {
        l = 0;
        for(k = 1; k<i ; k++)
        {
            printf("  ");
        }
        for(j = 5 ; j >= i ; j--)
        {
            printf("%d ", ++l);
        }
        printf("\n");
    }
    return 0;
}
*/

/*


5 4 3 2 1
 5 4 3 2
  5 4 3
   5 4
    5

*/

/*
#include <stdio.h>

int main()
{
    int i, j, k;
    for (i = 1; i <= 5; i++)
    {
        for (k = 1; k < i; k++)
        {
            printf(" ");
        }
        for (j = 5; j >= i; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
*/

/*
        1
      1 2
    1 2 3
  1 2 3 4
1 2 3 4 5
*/

/*
#include <stdio.h>

int main()
{
    int i , j ,k;
    for(i = 1 ; i<= 5 ; i++)
    {
        for(k = 5 ; k>i ; k--)
        {
            printf("  ");
        }
        for(j = 1 ; j<= i ; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}
*/

/*

    1
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5

*/

/*
#include <stdio.h>

int main()
{
    int i ,j ,k;
    for(i = 1 ; i<= 5 ; i++)
    {
        for(k = 5 ; k>i ; k--)
        {
            printf(" ");
        }
        for(j = 1 ; j<= i ; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}
*/

/*
        1
       1 2
      1 2 3
     1 2 3 4
    1 2 3 4 5
     1 2 3 4
      1 2 3
       1 2
        1
*/
/*
#include <stdio.h>

int main()
{
    int i, j, k, m;
    for (i = 1; i <= 5; i++)
    {
        for (k = 5; k > i; k--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    for (i = 1; i <= 5; i++)
    {
        m = 0;
        if (i != 1)
        {
            for (k = 1; k < i; k++)
            {
                printf(" ");
            }
            for (j = 5; j >= i; j--)
            {
                printf("%d ", ++m);
            }
            printf("\n");
        }
    }
    return 0;
}

*/

/*

        *
       * *
      *   *
     *     *
    *       *
     *     *
      *   *
       * *
        *

*/
#include <stdio.h>

int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 5; j >= 1; j--)
        {
            if (i == j)
            {

                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        if (i != 1)
        {
            for (j = 1; j <= i; j++)
            {
                if (i == j)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    for (i = 2; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (i == j)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        for (j = 5; j >= i; j--)
        {
            if (i == j && j != 5)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}