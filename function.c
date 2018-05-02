#include <stdio.h>
#include <stdlib.h>
//function

// add two number with function
/*
double add (double num1, double num2)
{
    double sum = num1 + num2 ;
    return sum;
}
// amra jodi function take main funtion er pore likhi tahole main er age obossoi prototype declear korte hobe
// double add (double num1, double num2);
// prototype er por ; bosbe
int main()
{
    double a,b,c;
    a=b=2.5;
    c= add(a,b);

    printf("%lf\n",c);
    return 0;
}
*/

int test_fun(int x)
{
    int y = x;
    x = 2 * y;
    return (x*y);

}
int main()
{
    int x = 10,  y = 20, z = 30;
    z = test_fun(x);
    printf("%d %d %d",x,y,z);
    return 0;
}
