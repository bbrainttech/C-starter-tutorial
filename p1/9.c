#include <stdio.h>

void createFraction(int, int, int, int);
int GCM(int, int);
int main()
{
    int n1, n2, n3, n4;
    printf("Enter first pair of numbers : ");
    scanf("%d%d", &n1, &n2);
    printf("Enter second pair of numbers : ");
    scanf("%d%d", &n3, &n4);

    createFraction(n1, n2, n3, n4);
    return 0;
}

void createFraction(int a, int b, int c, int d)
{
    int gcm = GCM(b, d);
    int fr1 = (gcm / b) * a;
    int fr2 = (gcm / d) * c;
    int fr = fr1 + fr2;

    printf("\n %d/%d + %d/%d = %d/%d", a, b, c, d, fr, gcm);
}

int GCM(int a, int b)
{
    int i = 1;
    while (1)
    {
        if ((i % a == 0) && (i % b == 0))
        {
            break;
        }
        i++;
    }
    return i;
}