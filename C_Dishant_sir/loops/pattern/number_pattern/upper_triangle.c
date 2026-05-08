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
    int i , j;
    for(i =1 ; i<= 5 ; i++)
    {
        for(j = 5 ; j>= i ; j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}
*/

// ---------------------------------------------------------------------------------------------------------

/*
5 5 5 5 5 
4 4 4 4
3 3 3
2 2
1
*/

/*
#include<stdio.h>

int main()
{
    int i , j ;
    for(i = 5 ; i >= 1 ; i--)
    {
        for(j = 1 ; j <= i ; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}

*/

// ---------------------------------------------------------------------------------------------------------

/*
e d c b a 
e d c b
e d c
e d
e
*/

#include <stdio.h>

int main()
{
    char ch = 'e';
    int i , j ;
    for(i = 5 ; i >= 1 ; i--)
    {
        for(j = 1 ; j<= i ; j++)
        {
            printf("%c ",ch);
            ch--;
        }
        ch = 'e';
        printf("\n");
    }
    return 0;
}