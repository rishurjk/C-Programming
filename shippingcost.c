#include <stdio.h>
#define COST_PER_UNIT_WEIGHT 0.5
#define COST_PER_UNIT_DISTANCE 2.0

int main(){
    float weight, distance, shippingCost;
    printf("Enter the weight of the order (in kilograms): ");
    scanf("%f", &weight);

    printf("Enter the distance to the customer's location (in kilometers): ");
    scanf("%f", &distance);
    shippingCost = weight * COST_PER_UNIT_WEIGHT + distance * COST_PER_UNIT_DISTANCE;

    // Display the shipping cost to the user
    printf("Shipping cost: $%.2f \n", shippingCost);
}
