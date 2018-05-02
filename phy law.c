#include <stdio.h>
#include <stdlib.h>
// newton er goti sutro onujayi

int main()
{
    double t,v,s,d;
    scanf("%lf %lf",&t,&v);
    d=v*2*t;// distance
    //v=0+0*t;
    //s=0*2*t+.5*0*t*t;
    //s=0*2*t+.5*0*4*t*t;
    //s=0*2*t+0*2*t*t;
    //s=2*t*(0+0*t);
    s=2*t*v;
    printf("Distance = %.2lf and s = %.2lf\n",d,s);
    return 0;
}
