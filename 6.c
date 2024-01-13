#include <stdio.h>

void computeWeights(float, float, float, float);
int main()
{
    float kg1, kg2, g1, g2;

    printf("\n Enter the first set of weights : ");
    scanf("%f%f", &kg1, &g1);
    printf("\n Enter the second set of weights : ");
    scanf("%f%f", &kg2, &g2);

    computeWeights(kg1, g1, kg2, g2);
    return 0;
}

void computeWeights(float kg1, float g1, float kg2, float g2)
{
    int total_kg = kg1 + kg2;
    int total_g = g1 + g2;

    int g_to_kg = 0;

    while (total_g >= 1000)
    {
        g_to_kg = (total_g / 1000);
        total_kg += g_to_kg;
        total_g %= 1000;
    }

    printf("Total weights: %dkg %dg", total_kg, total_g);
}
