#include <stdio.h>
#include <stdlib.h>
// GCD or HCF Programme

int main()


{
    int a,b,x,gcd,lcd;// declear
    scanf("%d %d",&a,&b);// input
    if(a>b){
        x=b; // jeta sto setai gosagu
    }
    else{
        x=a;
    }
    for(;x>=1;x--){ //x er man asbe ,1 er soman naki boro cheak korbe ,x erman 1 kore komabe
        if(a%x==0 && b%x==0){// a or b x dhara ki bivajjo naki chear korbe
            gcd=x;// gcd cheak hoise
            break;
        }
    }
    lcd= a*b/gcd;
    printf("GDC is %d\nLCD is %d\n",gcd,lcd);
    return 0;
}

// break use na korle barbar kaj ta korto bt ami 1st bar ans pelei to amar kaj hoye jay so ar baralam nah
// ber hoye gelam programm theke


// uclid r division algorithm er sahajje gcd nirnoy
// mone rakhte hobe a ar 0 er gcd - a er value
// a ar b er gcd holo b ar a%b er gcd

/* {
     int a,b,t,gcd;
     scanf("%d %d",&a,&b);
     if(a==0){
        gcd = a;
     }
     else if (b == 0){
        gcd = b;
     }
     else{
        while(b!=0){
            t=b;
            b=a%b;
            a=t;
        }
        gcd = a;
     }
     printf("GCD is = %d\n",gcd);
     return 0;
 }
*/
// lcd * gcd = a*b somikoron theke epas opas korlei hobe
