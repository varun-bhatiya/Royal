#include<stdio.h>
#include<conio.h>

void main()
{
    int a ;
    printf("enter value of a : ");
    scanf("%d",&a);

    if(!a){
        printf("Zero became true.");
    }
    else{
        printf("True became false...");
    }
}