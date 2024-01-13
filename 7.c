#include <stdio.h>

void computeLengths(float, float, float, float);
int main()
{
    float ft1, ft2, in1, in2;

    printf("\n Enter the first set of lengths : ");
    scanf("%f%f", &ft1, &in1);
    printf("\n Enter the second set of lengths : ");
    scanf("%f%f", &ft2, &in2);

    computeLengths(ft1, in1, ft2, in2);
    return 0;
}

void computeLengths(float ft1, float in1, float ft2, float in2)
{
    int total_ft = ft1 + ft2;
    int total_in = in1 + in2;

    int in_to_ft = 0;

    while (total_in >= 12)
    {
        in_to_ft = (total_in / 12);
        total_ft += in_to_ft;
        total_in %= 12;
    }

    printf("Total Lenghts: %dft %din", total_ft, total_in);
}
