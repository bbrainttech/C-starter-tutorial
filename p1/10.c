#include <stdio.h>

int main()
{

    float deposit_amount = 0;
    printf("\n Enter deposited amount : ");
    scanf("%f", &deposit_amount);

    float interest = 0;
    if (deposit_amount >= 0 && deposit_amount < 5000)
    {
        interest = 4 / 100.0;
    }
    else if (deposit_amount >= 5000 && deposit_amount < 10000)
    {
        interest = 5 / 100.0;
    }
    else if (deposit_amount >= 10000 && deposit_amount < 20000)
    {
        interest = 6 / 100.0;
    }
    else if (deposit_amount >= 20000)
    {
        interest = 7 / 100.0;
    }
    float bank_pay = deposit_amount + (deposit_amount * interest);
    printf("Bank payment :  %f,", bank_pay);
    return 0;
}