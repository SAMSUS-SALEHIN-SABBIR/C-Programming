#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch>='a' && ch<='z')
        printf("%c is lower latter\n",ch);
    else if(ch>='A' && ch<='Z')
        printf("%c is Uper latter\n",ch);
    return 0;
}
//% c diye ekta neoya jabe
//&& dara 2 ta condition kei sotto bujhano hoise 1 &&1 =1 //1 && 0 = 1
// ch= a lekha jabe na ch ='a' likhte hobe nahole error asbe
