#include <stdio.h>
#include <stdlib.h>
//x+y=15,x-y=5 hole x o y er man koto?

int main()
/*
{
    double x,y,x_plas_y,x_minus_y;
    scanf("%lf",&x_plas_y);
    scanf("%lf",&x_minus_y);
    x=(x_plas_y+x_minus_y)/2;
    y=(x_plas_y-x_minus_y)/2;
    printf("%.2lf %.2lf\n",x,y);
    return 0;
}
*/
//4x+5y=14 , 5x+6y=17 hole x y er man ber koro
{
    double a1,a2,b1,b2,c1,c2,x,y;
    scanf("%lf %lf %lf %lf %lf %lf",&a1,&b1,&c1,&a2,&b2,&c2);
    x=(b2*c1-b1*c2)/(a1*b2-a2*b1);
    y=(a1*c2-a2*c1)/(a1*b2-a2*b1);
    printf("x = %.2lf\ny = %.2lf\n",x,y);
}
// ei prob ta onno ekta pergmme e valo kore bujhabo
