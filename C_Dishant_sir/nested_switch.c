#include <stdio.h>

void main()
{
    printf("Nested Switch Case!!!!!\n");
    int choice, subchoice, qty, total = 0, grand_total = 0;
start:
    printf("\n1.Fruits\n2.Vegitables\n3.Exit");
    printf("\nEnter Your Choice : ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("\n1.Apple -- Rs.180/Kg\n2.Banana -- Rs.70/kg\n3.Chikoo -- Rs.120/Kg\n");
        printf("\nEnter Your Choice : ");
        scanf("%d", &subchoice);
        switch (subchoice)
        {
        case 1:
            printf("\nSelected Item is Apple\nQuantity : ");
            scanf("%d", &qty);
            total = 180 * qty;
            break;
        case 2:
            printf("\nSelected Item is Banana\nQuantity : ");
            scanf("%d", &qty);
            total = 70 * qty;
            break;
        case 3:
            printf("\nSelected Item is Chikoo\nQuantity : ");
            scanf("%d", &qty);
            total = 120 * qty;
            break;
        default:
            printf("Enter valid Choice.....");
            total = 0;
            break;
        }
        grand_total += total;
        goto start;
        break;
    case 2:
        printf("\n\n1.Potato -- Rs.40/Kg \n2.Onion -- Rs.35/Kg \n3.Chilli Rs.30/Kg\n");
        printf("\nEnter Your Choice : ");
        scanf("%d", &subchoice);
        switch (subchoice)
        {
        case 1:
            printf("\nSelected Item is Potato\nQuantity : ");
            scanf("%d", &qty);
            total = 40 * qty;
            break;
        case 2:
            printf("\nSelected Item is Onion\nQuantity : ");
            scanf("%d", &qty);
            total = 35 * qty;
            break;
        case 3:
            printf("\nSelected Item is Chili\nQuantity : ");
            scanf("%d", &qty);
            total = 30 * qty;
            break;
        default:
            printf("Enter valid Choice.....");
            total = 0;
            break;
        }
        grand_total += total;
        goto start;
        break;
    case 3:
        printf("Grand Total = %d", grand_total);
        break;
    default:
        printf("Enter valid Choice.....");
        break;
    }
}