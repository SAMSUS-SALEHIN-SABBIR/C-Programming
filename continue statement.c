#include <stdio.h>
#include <stdlib.h>
// jor bijor ber kortesi

int main()
{
    int n=0; // o theke suru
    while(n<10){//10 er kom hobe
        n=n+1;//n er man n+1 hobe
        if (n%2==0){//n ke vag korle vagsesh sunno hole
            continue;// seta eriye jabe , porer dhape kaj korbe
        }
        printf("%d\n",n);//print korbe
    }
    return 0;
}
// continue use korle hust oi kaj ta bad diye bakigula kore
