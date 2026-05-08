#include <stdio.h>
#include <math.h>
int main()
{
    int num = 0, sum =0 , rem =0 , dup =0;
    printf("Enter a number : ");
    scanf("%d",&num);
    dup = num;
    // printf("%d\n",dup);
    // verify = num;
    // printf("%d\n",verify);
    repeat:
    for(;dup > 0;)
    {
        rem = dup % 10;
        sum += pow(rem,2);
        dup /= 10;
    }
    // printf("sum of square of digit of num %d is %d",dup , sum);
    if(sum == 1)
    {
        printf("%d is a happy number",num);
    }
    else if (sum == 4)
    {
        printf("%d is unhappy number",num);
    }
    else{
        dup = sum;
        sum = 0; 
        goto repeat;
    }
    return 0;
}