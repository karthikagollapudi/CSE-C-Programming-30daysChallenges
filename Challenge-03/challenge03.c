
#include <stdio.h>

int main()
{
    float amount, distance;
    float discount = 0, deliveryCharge;
    float amountAfterDiscount, finalAmount;
    int customerType;

    printf("Enter purchase amount: ");
    scanf("%f", &amount);

    printf("Enter customer type (1-Student, 2-Regular): ");
    scanf("%d", &customerType);

    printf("Enter delivery distance in km: ");
    scanf("%f", &distance);

    if (amount < 0 || distance < 0)
    {
        printf("Invalid input!\n");
        return 1;
    }

    switch (customerType)
    {
        case 1:
            if (amount >= 2000)
                discount = amount * 0.15;
            else
                discount = amount * 0.10;
            break;

        case 2:
            if (amount >= 3000)
                discount = amount * 0.08;
            break;

        default:
            printf("Invalid customer type!\n");
            return 1;
    }

    amountAfterDiscount = amount - discount;

    if (distance <= 5)
        deliveryCharge = 40;
    else if (distance <= 15)
        deliveryCharge = 70;
    else
        deliveryCharge = 100;

    finalAmount = amountAfterDiscount + deliveryCharge;

    printf("\n===== SMARTCART BILL =====\n");
    printf("Purchase Amount       : Rs. %.2f\n", amount);
    printf("Discount              : Rs. %.2f\n", discount);
    printf("Amount After Discount : Rs. %.2f\n",
           amountAfterDiscount);
    printf("Delivery Charge       : Rs. %.2f\n",
           deliveryCharge);
    printf("Final Payable Amount  : Rs. %.2f\n",
           finalAmount);

    return 0;
}
