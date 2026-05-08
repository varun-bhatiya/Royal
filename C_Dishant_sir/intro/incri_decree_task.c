#include<stdio.h>
// #include<conio.h>

int main()
{
    int a = 25;
    int sum = (a++) + (--a) + (a--) - (++a);
    printf("a : %d & sum : %d",a,sum);
    return 0;
}