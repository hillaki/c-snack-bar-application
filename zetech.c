#include <stdio.h>
#include <stdlib.h>

void exit();
void m_m();
void snack();

int main()
{
    void snacks()
    {
    int item;
    int quantity;
    int again;
    int total;
    float vatrate=0.16,vat;
    printf("\t\tWelcome to Zetech C Snack Shop\n");
    printf("Snacks Available\n");
    printf("\t\t 1. Hot Dog - ksh90\n");
    printf("\t\t 2. Hamburger - ksh300\n");
    printf("\t\t 3. French Fries - ksh150\n");
    printf("\t\t 4. Milk Shake - ksh150\n");
    printf("\t\t 5. Coffee - ksh70\n");
    printf("\t\t 6. Beef Smokie - ksh40\n");

    printf("Enter item number\n");
    scanf("%d",&item);
    if(item==1)
    {
        printf("Enter quantity\n");
        scanf("%d",&quantity);
        total=90*quantity;
        vat=(total+(total*vatrate));
        printf("VAT: %.2f\n",vat);
        printf("Your total amount is  Kshs: %d",total);

        printf("\nWould you like to choose anything else?\N 1.YES, 2.NO:");
        scanf("%d&again");
        if(again==1)
        {
            snack();
        }
        else if(again==2)
        {
           printf("Thank you for choosing us\n");
        }
        else{
            printf("Invalid choice\n");
        }



    }
    else if(item==2)
    {
        printf("Enter quantity\n");
        scanf("%d",&quantity);
        total=300*quantity;
        vat=(total+(total*vatrate));
        printf("VAT: %.2f\n",vat);
        printf("Your total amount is  Kshs: %d",total);
        printf("\nWould you like to choose anything else?\N 1.YES, 2.NO:");
        scanf("%d&again");
        if(again==1)
        {
            snack();
        }
        else if(again==2)
        {
           printf("Thank you for choosing us\n");
        }
        else{
            printf("Invalid choice\n");
        }
    }
      else if(item==3)
    {
        printf("Enter quantity\n");
        scanf("%d",&quantity);
        total=150*quantity;
        vat=(total+(total*vatrate));
        printf("VAT: %.2f\n",vat);
        printf("Your total amount is  Kshs: %d",total);
        printf("\nWould you like to choose anything else?\N 1.YES, 2.NO:");
        scanf("%d&again");
        if(again==1)
        {
            snack();
        }
        else if(again==2)
        {
           printf("Thank you for choosing us\n");
        }
        else{
            printf("Invalid choice\n");
        }
    }
      else if(item==4)
    {
        printf("Enter quantity\n");
        scanf("%d",&quantity);
        total=150*quantity;
        vat=(total+(total*vatrate));
        printf("VAT: %.2f\n",vat);
        printf("Your total amount is  Kshs: %d",total);

        printf("\nWould you like to choose anything else?\N 1.YES, 2.NO:");
        scanf("%d&again");
        if(again==1)
        {
            snack();
        }
        else if(again==2)
        {
           printf("Thank you for choosing us\n");
        }
        else{
            printf("Invalid choice\n");
        }
    }
      else if(item==5)
    {
        printf("Enter quantity\n");
        scanf("%d",&quantity);
        total=70*quantity;
        vat=(total+(total*vatrate));
        printf("VAT: %.2f\n",vat);
        printf("Your total amount is  Kshs: %d",total);

        printf("\nWould you like to choose anything else?\N 1.YES, 2.NO:");
        scanf("%d&again");
        if(again==1)
        {
            snack();
        }
        else if(again==2)
        {
           printf("Thank you for choosing us\n");
        }
        else{
            printf("Invalid choice\n");
        }
    }
      else if(item==6)
    {
        printf("Enter quantity\n");
        scanf("%d",&quantity);
        total=40*quantity;
        vat=(total+(total*vatrate));
        printf("VAT: %.2f\n",vat);
        printf("Your total amount is  Kshs: %d",total);

        printf("\nWould you like to choose anything else?\N 1.YES, 2.NO:");
        scanf("%d&again");
        if(again==1)
        {
            snack();
        }
        else if(again==2)
        {
           printf("Thank you for choosing us\n");
        }
        else{
            printf("Invalid choice\n");
        }
    }

    }
void exit()
{
    printf("Thank you very much and feel free to come again\n");
}
    return 0;
}
