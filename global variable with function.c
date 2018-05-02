#include <stdio.h>
#include <stdlib.h>
//  kno variable er man amra globaly declear korle main funtion er moddhe sei variable er man same thakbe
//  bt seta user define function er vitore kaj korbe nah
double pi = 3.14;
void valu()
{
    pi = 3.1416; // ekhane double pi likhkle ta local variable hoye jeto
}
int main()
{
    printf("%lf\n",pi);//  ekhane 3.14 hobe
    valu();
    printf("%lf\n",pi); // funcion call korar por tai ekhane 3.1416 hobe

    return 0;
}
