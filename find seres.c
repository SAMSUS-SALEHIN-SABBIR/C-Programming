#include <stdio.h>
#include <stdlib.h>
//n tomo dharar somosti
//1+2+3+........+998+999+1000 dharar somosti koto ?
int main()
/*
{
    int n,sum;//
    scanf("%d",&n);
    sum=(n*(n+1))/2;
    printf("Summation = %d\n",sum);
    return 0;
}
*/
// loop er maddhgome nirnoy
{
    int n,sum=0,i;// declear + initialize
    scanf("%d",&n);// input
    for(i=1;i<=n;i++){// i 0 theke n er soman hobe ek ek kore barbe
        sum=sum+i;// ekhane 1st  sum = 0+1 .2nd sum=1+2=3 3rd 3+3=6 .. colbe
    }
    printf("Summation = %d\n",sum);// bahir kore print korlam jate ekbare just man tai pai
    return 0;
}
// anjaje kintu loop e darun vul koresilam
// vitore printf dile kinu potibarer man dekhaito

// exsersize
