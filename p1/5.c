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
    float work_charge = 120;
    if (work_hours == 0 && cost_of_parts == 0)
    {
        work_charge = 0;
    }
    else
    {
        work_charge += cost_of_parts;
        if (work_charge > 120)
        {
            work_charge = (work_hours * CHARGE_PER_HOUR) + cost_of_parts;
        }
    }
    printf("\n The charge of the job is : $%.2f", work_charge);
}