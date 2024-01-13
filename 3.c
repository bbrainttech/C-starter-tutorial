#include <stdio.h>

int main()
{
    int n;
    float num, sum = 0;
    printf("\nHow many numbers : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter a number : ");
        scanf("%f", &num);

        sum += num;
    }

    printf("\n The sum of the %d numbers is %.2f", n, sum);

    return 0;
}
