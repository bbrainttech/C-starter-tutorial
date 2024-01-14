#include <stdio.h>

void computeInterest(double);
int main()
{

    double amount;
    printf("\n Enter and amount :");
    scanf("%lf", &amount);
    computeInterest(amount);

    return 0;
}

void computeInterest(double amount)
{
    float interest_count = 5;
    while (interest_count <= 12)
    {

        double interest_rate = (interest_count / 100.0);
        double interest = (amount * interest_rate);

        printf("\n Interest for %2.2lf% : %4.3lf ", interest_rate * 100, interest);
        interest_count += 0.5;
    }
}