#include <stdio.h>
#include <stdlib.h>
// nije theke impliment kora
int main()
/*
{
    int n=5,i=1,namta;
    while(i<=10){
        namta=n*i;
        printf("%d x %d = %d\n",n,i,namta);
        i++;
    }
    return 0;
}
*/
// uporer tay ami variable besi newate amar time besi legese
/*
{
    int n=5,i=1;//n er man 5,i 1 theke suru
    while(i<=10){//i er man 10 porjonto jabe
        printf("%d X %d = %d\n",n,i,n*i);// print korbe n,i,n*1=5*1=5
        i=i+1;;//i er man barabe
        // condition mittha na howa porjonto colbe
    }
    return 0;
}

//eibar amra namta gun diye kora sara ber korbo

*/
/*
{
    int n=5,m=0,i=1;//n = 5 i = 1 ar m= 0 dilam
    for(;i<=10;i++){// i=1 theke suru 10 porjonto colbe
        m=m+n; // m er man m+n mane m=0+5
        printf("%d X %d = %d\n",n,i,m);// print korlo
        // sesh hole m er man 5 holo 5+5 =10 holo , 10+5 = 15 holo evabe colbe
    }
    return 0;
}
*/
// ekhn 1 - 20 porjonto namta likhbo ek programm e

{
    int n,m=0,i;
    for(n=1;n<=20;n++){
        for(i=1;i<=10;i++){
            m=m+n;
            printf("%d X %d = %d\n",n,i,m);
        }
        printf("\n\n");
    }
    return 0;

}
