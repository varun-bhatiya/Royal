/*
 * * * * *
 *       *
 *       *
 *       *
 * * * * *
 */

/*
#include <stdio.h>

int main()
{
    int i , j;
    for(i =1 ; i <= 5 ; i++)
    {
        for(j = 1 ; j<= 5 ; j++)
        {
            if(i == 1 || i == 5 || j == 1 || j ==5)
            {
            printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}

*/

/*
 *
 * *
 *   *
 *     *
 * * * * *
 */

/*
#include <stdio.h>

int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (i == 5 || j == 1 || i == j)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
*/

/*
 * * * * *
 *     *
 *   *
 * *
 *
 */

/*
#include <stdio.h>

int main()
{
   int i, j;
   for (i = 5; i >= 1; i--)
   {
       for (j = 1; j <= i; j++)
       {
           if (i == 5 || j == 1 || j == i)
               printf("* ");
           else
               printf("  ");
       }
       printf("\n");
   }
   return 0;
}
*/

/*
 * * * * *
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
        for (j = 1; j <= 5; j++)
        {
            if (i == 1 || j == i || j == 5)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}

/*

#include <stdio.h>

int main()
{
    int i , j ,k;
    for(i = 1 ; i <= 5 ; i++) // 3
    {
        for(k = 5 ; k > i ; k--) //      *
        {                       //    *  *
            printf("  ");       //  *    *
        }
        for(j = 1 ; j <= i ; j++)
        {
            if(i == 5 || j == 5 || j == i || j == 1)
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
    }
    return 0;
}
    
*/