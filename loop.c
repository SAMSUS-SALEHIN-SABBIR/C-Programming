#include <stdio.h>
#include <stdlib.h>
// amra ekhane while loop bebohar kora hobe

int main()
{
    int n=1;//prothome initializ korlam koto theke suru korbo
    while(n<=10)// while er por ( ) er moddhe condition dilam koto porjonto loop colbe
        {
            //condition sotti hole loop er moddhe dhukbe nahole dhukbe na
            //n=1 hole condition sotto loop er moddhe dhuklo
        printf("%d\n\n",n);// ek line sorate \n 2 line por likhte ki koresi seta dekhen
    //printf pelo print o korlo
        n++;// n er man 1 barai dilo mane n=1+1=2 holo
        // than ki korbe ? porer printf er kaj korbe ?
        // nah jotokkhn na amar condition mittha hobe totokkhn loop colbe
        // abar cheak korbe n=2 hole condition sotto, n er man print korlo, than n er man 1 baralo
        //evabe colte thaklo than jokhn n er man 11 holo
        // tokhn dekhlo je condition vul
        // loop theke ber hoye gelo
    }
    printf("bairer printf\n");// loop er {} er por ja kaj dekwa holo segula korlo

    return 0;
}
// finish // bujhsen to sobai
