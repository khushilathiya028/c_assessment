


#include <stdio.h>

int main()
{
    int a;
    int qty;
    int total;
    char y_n;
    int x = 0;
    do
    {
        printf("\nMenu\n 1.Pizza          = 180 rs\n");
        printf(" 2.Burgar         = 100 rs\n");
        printf(" 3.dosa           = 120 rs\n ");
        printf("4.idli           = 50 rs\n");
        printf("Select your food : ");
        scanf("%d", &a);

        switch (a)
        {
        case 1:
            printf("\nYou selected pizza");
            printf("\nEnter the quantity:");
            scanf("%d", &qty);
            total = qty * 180;
            printf("\n Total amount is : %d", total);
            break;

        case 2:
            printf("\n You selected Burgar");
            printf("\n Enter the quantity: ");
            scanf("%d", &qty);
            total = qty * 100;
            printf("\n Total amount is : %d", total);
            break;

        case 3:
            printf("\n You selected dosa");
            printf("\n Enter the quantity: ");
            scanf("%d", &qty);
            total = qty * 120;
            printf("\n Total amount is : %d", total);
            break;

        case 4:
            printf("\n You selected idli");
            printf("\n Enter the quantity: ");
            scanf("%d", &qty);
            total = qty * 50;
            printf("\n Total amount is : %d", total);
            break;

        default:
            printf("invalid food");
            break;
        }
        printf("\nEnter a any order yes for y and no for y :");
        scanf("%s", &y_n);
        x += total;

    } while (y_n != 'n');
    printf("Total amountis:%d",x);
}