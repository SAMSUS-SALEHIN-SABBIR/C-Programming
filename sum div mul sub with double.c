#include <stdio.h>
#include <stdlib.h>

int main()
{
    double n1,n2,jog,biyog,gun,vag;

    char a,b,c,d;
    a = getchar();
    b = getchar();
    c = getchar();
    d = getchar();
    scanf("%lf %lf",&n1,&n2);
    //formula
    jog=n1+n2;
    biyog=n1-n2;
    gun=n1*n2;
    vag=n1/n2;
    printf("n1 %c n2 = %lf\n",a,jog);
    printf("n1 %c n2 = %lf\n",b,biyog);
    printf("n1 %c n2 = %lf\n",c,gun);
    printf("n1 %c n2 = %lf\n",d,vag);
    return 0;
}
// n1 er man 0 dile vag inf mane infinity asbe
