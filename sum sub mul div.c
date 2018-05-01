#include <stdio.h>
#include <stdlib.h>

int main()



/*
{
    int num1,num2;
    printf("Enter a number : \n");
    scanf("%d",&num1);
    printf("Enter another number : \n");
    scanf("%d",&num2);
    printf("%d + %d = %d\n",num1,num2,num1+num2);//jog
    printf("%d - %d = %d\n",num1,num2,num1-num2);//biyog
    printf("%d * %d = %d\n",num1,num2,num1*num2);//gun korar jnno x na diye * use hoy
    printf("%d / %d = %d\n",num1,num2,num1/num2);//vag korar jnno / use hoy
    return 0;
}
*/

// user input and declear deffernt variable

{
    int n1,n2,jog,biyog,gun,vag;// alada alada variable kore nilam pore tar moddhe assain korbo
    printf("Enter a number : \n");
    scanf("%d",&n1);
    printf("Enter a diferent number :  \n");
    scanf("%d",&n2);
    // ekektar moddhe ekektar kaj kore debo
    jog=n1+n2;
    biyog=n1-n2;
    gun=n1*n2;
    vag=n1/n2;
    printf("sonkha duti %d o %d\nTader\njog = %d\nbiyog = %d\ngun = %d\nvag = %d\n",n1,n2,jog,biyog,gun,vag);
    return 0;

}
