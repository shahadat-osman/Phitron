#include<stdio.h>
int main()
{
    int userID, unit;
    float bill, surcharge;
    char name[20];

    printf("Input User ID: \n");
    scanf("%d", &userID);

    printf("Enter customer Name:\n");
    scanf("%s", name);

    printf("Input Consumed Unit:\n");
    scanf("%d", &unit);

    printf("Customer ID: %d\n", userID);
    printf("Customer Name: %s\n", name);
    printf("Unit Consumed: %d\n", unit);
    
    {
        if(unit>0)
        {
            bill=unit*1.2;
            printf("Amount Charges @BDT 1.20/unit: %.2f TK\n", bill);
        }
        else if(unit>=200)
        {
            bill=unit*1.5;
            printf("Amount Charges @BDT 1.50/unit: %.2f TK\n", bill);
        }
        else if(unit>=400)
        {
            bill=unit*1.8;
            printf("Amount Charges @BDT 1.80/unit: %.2f TK\n", bill);
        }
        else if(unit>=600)
        {
            bill=unit*2.0;
            printf("Amount Charges @BDT 2.00/unit: %.2f TK\n", bill);
        }
    }

    if(bill>=400)
    {
        surcharge=bill*.15;
        printf("Surcharge Amount: %.2f TK\n", surcharge);
    }
    {
        if(bill<=100)
        {
            printf("Net Amount Paid by the customer = 100 TK\n");
        }
        else
        {
            printf("Net Amount Paid by the customer = %.2f TK\n", surcharge+bill);
        }
    }

    return 0;
}