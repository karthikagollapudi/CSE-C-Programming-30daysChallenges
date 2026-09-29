#include <stdio.h>

int main()
{
    float distance, mileage, price;
    float fuel, cost;

    printf("Enter trip distance: ");
    scanf("%f", &distance);

    printf("Enter mileage of vehicle: ");
    scanf("%f", &mileage);

    printf("Enter fuel price: ");
    scanf("%f", &price);

    fuel = distance / mileage;
    cost = fuel * price;

    printf("\nFuel needed = %.2f litres\n", fuel);
    printf("Trip fuel cost = %.2f\n", cost);

    return 0;
}
