#include <stdio.h>
#include <stdlib.h>

int main()
/*
{
    int a,b,c;
    for(a=1;a<=3;a++){
        for(b=1;b<=3;b++){
            for(c=1;c<=3;c++){
                printf("%d %d %d\n",a,b,c);
            }
        }
    }
    return 0;
}
*/
// likhesi bt onek bar esese mane ek lekh  theke 3 bar kore bt amra ta caina
/*
{
    int a,b,c;
    for(a=1;a<=3;a++){
        for(b=1;b<3 && b!=a;b++){
            for(c=1;c<=3 && c!=a && c!=b;c++){
                printf("%d %d %d\n",a,b,c);
            }
        }
    }
}
*/
// 321 print kortese karon ta amra pore ongse bujhar try korbo
/*
{
    int a,b,c;
    for(a=1;a<4;a++){
        for(b=1;b<4;b++){
            if(b!=a){
                    for(c=1;c<4;c++){
                        if(c!=a && c!=b){
                            printf("%d %d %d\n",a,b,c);
                        }
                    }
        }
    }
}
}
*/
// ist perfect bt amra aro sohoje korte cai
{
    int a,b,c;//3 ta variable nilam
    for(a=1;a<=3;a++){//a 1 theke 3 porjonto colbe loop er vitorer kaj koree a er man barabe
        for(b=1;b<=3;b++){//b o theke 3 porjnto colbe b++ hobe
            for(c=1;c<=3;c++){// c o a ar b er moto same
                if(b!=a && c!=b && c!=a){//ekhane b er man a er soman hote parbe na c er man a ar b er soman hote parbe na
                    printf("%d %d %d\n",a,b,c);// a b c print korbe
                }
            }
        }
    }
}
//eibar darun vabe kaj korse
