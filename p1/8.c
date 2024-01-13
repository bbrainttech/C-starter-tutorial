#include <stdio.h>
#define DISCOUNT (15 / 100.0)

void computeCost(float, float, float);
int main()
{

    float item1, item2, item3;
    printf("\n Enter the pricese of three items : ");
    scanf("%f%f%f", &item1, &item2, &item3);
    computeCost(item1, item2, item3);

    return 0;
}
void computeCost(float a, float b, float c)
{

    float totalCost = a + b + c;

    if (totalCost >= 300)
    {
        totalCost -= (totalCost * DISCOUNT);
    }
    printf("\n Total cost : $%.2f", totalCost);
}