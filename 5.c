#include <stdio.h>
#define INSPECT_COST 75
#define CHARGE_PER_HOUR 75

void computeCharge(float, float);
int main()
{
    float hours_work, cost_of_parts;
    printf("\n Enter the hours of work : ");
    scanf("%f", &hours_work);

    printf("\n Enter the cost of parts : ");
    scanf("%f", &cost_of_parts);

    computeCharge(hours_work, cost_of_parts);
    return 0;
}

void computeCharge(float work_hours, float cost_of_parts)
{
    if (work_hours <= 0)
    {
        printf("No work has been done, vehicle inspect charge = %d", INSPECT_COST);
    }
    else
    {

        float work_charge = 120;
        work_charge = (work_hours * CHARGE_PER_HOUR) + cost_of_parts;

        printf("\n The charger of the job is : $%.2f", work_charge);
    }
}