#include <stdio.h>
#include <stdlib.h>
// 5 er namta for loop use kore korbo

int main()

{
    int n,i;
    scanf("%d",&n);// n er man nilo 5
    for(i=1;i<=10;i++){ //i 1 theke suru 10 porjonto jabe
        printf("%d X %d = %d\n",n,i,n*i);//print korbe than i++ korbe
        // ekhane prothom block sotto mane i er ban 1 bosale hole 2nd block e jabe condition cheak korte
        // condition sotto hole loop er moddhe dhkbe
        // loop er kaj sesh kore than i++ ba increment/decrement e ejabe
        // erpor mittha na hoya porjonto programm colbe
    }
    return 0;
}

// vul korsi seta ber korte hobe
// ami first e ekta variable printf e assain kori nai
// llop er moddhe poti ; er kaj age korbe eksathe na
