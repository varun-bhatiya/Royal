#include <stdio.h>
#include <conio.h>

void main()
{
    float math, phy, chem, per;
    printf("Enter marks for maths : ");
    scanf("%f", &math);
    printf("Enter marks for physics : ");
    scanf("%f", &phy);
    printf("Enter marks for chemistry : ");
    scanf("%f", &chem);

    per = (math + phy + chem) / 3;
    printf("per : %f\n", per);
    if (per > 0 && per < 100)
    {
        if (per > 90)
        {
            printf("Grade A+....");
        }
        else if (per > 80)
        {
            printf("Grade A....");
        }
        else if (per > 70)
        {
            printf("Grade B+....");
        }
        else if (per > 60)
        {
            printf("Grade B....");
        }
        else if (per > 50)
        {
            printf("Grade C+....");
        }
        else if (per > 40)
        {
            printf("Grade C....");
        }
        else
        {
            printf("fail...");
        }
    }
    else
    {
        printf("Enter Valid Marks.....");
    }
}