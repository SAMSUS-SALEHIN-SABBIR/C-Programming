#include <stdio.h>
#include <stdlib.h>

int main()
/*
{
    int n=5,i=1;
    for(;i<=10;i++){
        printf("%d X %d = %d\n",n,i,n*i);
    }
    return 0;
}
*/
// age initstate korar karone ekta block faka rekhesi
// %d dilam bt kawke nirdesh koralam nah tahole garveg man dekhabe
{
    int n=5,i=1;
    for(;;){
        printf("%d X %d = %d\n",n,i,n*i);
        i++;
        if(i>10){
            break;
        }
    }
    return 0;
}
