#include <stdio.h>

int main()
{
    int i , j;
    // char ch = 'a';
    for(i = 1 ; i <= 5 ; i++)
    {
        char ch = 'a'; //logic 4
        for( j = 1 ; j<= i;j++)
        {
            // printf("%c ",j+96);
            // printf("%c ",ch + i -1);
            printf("%c ",ch);
            ch++;
        }
        // ch = 'a';
        printf("\n");
    }
    return 0;
}