#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a1,a2,b1,b2,c1,c2,d,x,y;// declear
    scanf("%lf %lf %lf %lf %lf %lf",&a1,&b1,&c1,&a2,&b2,&c2);// input
    d=a1*b2-a2*b1;//formula 2 bar na use kore ek var e rakha
    if((int) d == 0){// vag 0 diye kora jay na
            printf(" Valu of x and y Not Determinned\n");
    }
    else{
        x=(b2*c1-b1*c2)/d;// formula
        y=(a1*c2-a2*c1)/d;// formula
        printf("x = %.2lf, y = %.2lf\n",x,y);
    }
    return 0;
}
