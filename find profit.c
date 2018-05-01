#include <stdio.h>
#include <stdlib.h>

int main()
{
    double loan_amount,interest,years,total,monthly;// declear
    scanf("%lf %lf %lf",&loan_amount,&interest,&years);// input
    total = loan_amount + (loan_amount * interest)/100;// taka poti bosor barle 5 gun kora lagbe
    monthly = total / (years*12);// formula
    printf("Total Ammount = %.2lf\n Monthly = %.2lf\n",total,monthly);
    return 0;
}
