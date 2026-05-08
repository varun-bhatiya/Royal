#include<stdio.h>
#include<math.h>
int main()
{
    int num , sum = 0, dup , len = 0;
    printf("Enter the number : ");
    scanf("%d",&num);
    dup = num;
    while(dup > 0)
    {
        len++;
        dup /= 10;
    }
    dup = num;
    while(dup > 0)
    {
        sum += pow(dup%10,len);
        printf("%d\t",sum);
        dup /=10;
    }
    if(num == sum)
    {
        printf("%d is armstrong number.",num);
    }
    else{
        printf("%d is not armstrong number.",num);
    }
    return 0;
}