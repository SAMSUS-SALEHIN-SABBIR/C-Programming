#include <stdio.h>
#include <stdlib.h>

int main()

/*
{
    int a=1.32,b=13,sum=a+b;
    printf("sum is %d\n",sum);
    return 0;
}
*/

// ans 14.32 hobar kotha bt 14 esese. er karon int (data type) e dosomik ney na
// int holo purno sonkha
// dosomiker jnno amader float or double use korte hobe
// ei je 1.32 k 1 dhorlo etake bole (type cast)

// type cast er variable tir man cheange hoy na


{
    int n;
    double x=10.5;
    n=(int)x;
    //printf("value of n %d\n value of x %lf\n",n,x); // ei tatei 10.500000 esesilo
    printf("n = %d, x = %.1lf \n",n,x);
    return 0;
// vul koresi double likhle %d er jagay %lf likhte hoy
// ans n = 10, x = 10.500000
// ekhane kintu x er man .5 na ese 5 er por 00000 mane 5 ta 0 bosese
// bt keno? bcz otometic compiler tar kaj korese bt amra caile eta thamate pari
// oh tai kintu kivabe ? ans : %lf er lf er age amra .1 dite pari
// tahole . er por 1 ti sonkha print hobe ar .5 dile 5 ta
// joto gula ase seta dekahabe kintu porer gula 0 kore debe kintu . er por 5 er besi kintu dekhabe na

}
