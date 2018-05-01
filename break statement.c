#include <stdio.h>
#include <stdlib.h>


// while(1) or while(1==1) dile lopper moddhe jeta dewa seta bar bar kaj korbe

// break stetment

int main()
{
    int n=1;// 1 theke suru
    while(n<=100){  //n 100 porjonto colbe
        printf("%d\n",n);// condition sotto howa porjonto print korbe
        n++;// n er man 1 kore barabe
        if(n>10){ // n er man jodi 10 er theke besi hoy
            break; // brek ho direct loop theke ber hoye jabe
        }
    }
    return 0;
}
// 1 theke 100 thakleo 10 er boro 11 holei
// loop theke ber hoye jabe
// mane print  hobe 1 theke 10 porjonto
