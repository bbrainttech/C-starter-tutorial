#include <stdio.h>

void classifyTriangle(float, float, float);

int main()
{
    float sideA, sideB, sideC;
    printf("Enter 3 sides of a triangle :");
    scanf("%f%f%f", &sideA, &sideB, &sideC);

    classifyTriangle(sideA, sideB, sideC);
    return 0;
}
void classifyTriangle(float a, float b, float c)
{
    if ((a < 1 || b < 1 || c < 1) || ((a == b + c) || (b == a + c) || (c == a + b)))
    {
        printf("\n Not a triangle");
    }
    else
    {

        if (a != b && a != c && b != c)
        {
            printf("\n Scalene");
        }
        if (a == b || a == c || b == c)
        {
            printf("\n Isoceles");
        }
        if (a == b && b == c)
        {
            printf("\n Equilateral");
        }
    }
}