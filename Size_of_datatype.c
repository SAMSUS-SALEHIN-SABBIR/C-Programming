#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    a= 1000;
    printf("value of a is %d\n",a); //ans thik ase
    a= -21000;
    printf("value of a is %d\n",a); // ans thik ase
    a= 10000000;
    printf("value of a is %d\n",a); // ans thik ase
    a= -10000000;
    printf("value of a is %d\n",a); // ans thik ase
    a= 100020004000503;
    printf("value of a is %d\n",a); // ans thik nai
    a= -4325987632;
    printf("value of a is %d\n",a); // ans thik nai
    return 0;
 // er karon ki ? jegulor man -2147483648 theke 2147483647 porjonto segulai print korbe thik moto
 // int holo 4 bit . 1 bit = 8 byte . i byte e 2 ti sonkha rakha jay
 // 4 bit e 32 byte . 32 byte e 32 * 2
 // 2 er power 32 korle amra pai 4294967296
 //setake ordhek korle prothom comment tar man pai ....
}
// assa jodi double hoy 64 bit . 1.7E-308(1.7*pow(10,-308)) theke 1.7E+308(1.7*pow(10,308)) porjonto
