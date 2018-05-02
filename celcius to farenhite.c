#include <stdio.h>
#include <stdlib.h>
//formula
//c/5=(f-32)/9=r/4=(k-273.15)/5
// c to f
int main()
/*
{
    double c,f;// declear
    printf("Enter The ceclius Numner\n");
    scanf("%lf",&c);// input
    f=(c*1.8)+32;// formula
    printf("Farenheit =%.2lf\n",f);// output
    return 0;
}
*/
{
    double f,c;
    scanf("%lf",&f);// input
    printf("%.2lf is farenheit and %.2lf is output format for Celsias value\n",f,((f-32)*5)/9);// output
}
//
