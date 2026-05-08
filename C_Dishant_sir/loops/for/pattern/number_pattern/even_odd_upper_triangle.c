/*
1 1 1 1 1
0 0 0 0
1 1 1
0 0
1
*/

/*
#include <stdio.h>

int main()
{
    int i , j;
    for(i = 1; i <=5 ;i++)
    {
        for(j = 5 ; j >= i ; j--)
        {
            printf("%d ",i%2);
        }
        printf("\n");
    }

    return 0;
}

*/

/*
1 2 3 4 5
2 3 4 5
3 4 5
4 5
5
*/

/*
#include <stdio.h>

int main()
{
    int i, j;
    for(i = 1 ; i <= 5 ; i++)
    {
        for(j = i ; j<= 5 ; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}
*/

/*
5 4 3 2 1
4 3 2 1
3 2 1
2 1
1
*/

/*
#include <stdio.h>

int main()
{
    int i , j;
    for(i = 5 ; i >= 1 ; i--)
    {
        for(j = i ; j >= 1 ; j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}
*/

/*
a b c d e
f g h i
j k l
m n
o
*/

#include <stdio.h>

int main()
{
    char ch = 'a';
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 5; j >= i; j--)
        {
            printf("%c ", ch++);
        }
        printf("\n");
    }
    return 0;
}