#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,x,gcd;// declear
    scanf("%d %d",&a,&b);// input
    if(a<b){// a soto hole
            x=a;// x er man a
    }
    else{x=b;// na hole x er man b
    }// mane amra sototake x bole hisab korbo
    for(;x>=1;x--){// o theke 1 or 1 er boro ; x er man komte thakbe
        if(a%x==0 && b%x==0){// dutakei x diye vag diye vagsesh 0 hole
        gcd=x;// x e gsagu
    break; // paile bad dibe na paile abar korbe . brek na dile prob hobe man 1 asbe
    }
    //0 na hole abar loop calabe bt else er dorkar nai
    }
    printf("GDC ID %d\n",gcd);// print
    return 0;
}
