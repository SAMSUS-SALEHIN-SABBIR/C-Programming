#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,valu;
    char sign;
    printf("Enter Your Number :\n");
    scanf("%d",&n1);
    printf("Enter Another Number :\n");
    scanf("%d",&n2);
    valu=n1+n2;
    sign='+';//char type e ' cotation ' er moddhe valu rakhte hoy
    printf("%d %c %d = %d\n",n1,sign,n2,valu);
    valu=n1-n2;
    sign='-';
    printf("%d %c %d = %d\n",n1,sign,n2,valu);
    valu=n1*n2;
    sign='*';
    printf("%d %c %d = %d\n",n1,sign,n2,valu);
    valu=n1/n2;
    sign='/';
    printf("%d %c %d = %d\n",n1,sign,n2,valu);
    return 0;
}
