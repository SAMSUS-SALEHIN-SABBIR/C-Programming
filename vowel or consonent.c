#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') // just = na == hobe
        printf("%c Is vowel\n",ch);
    else
        printf("%c Is Consonant\n",ch);
    return 0;
}
// ekhane == mane jodi ch er man a hoy
//ar = mane ch er man a
// parthokko bujhte hobe
