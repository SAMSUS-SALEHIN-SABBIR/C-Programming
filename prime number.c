#include <stdio.h>
#include <stdlib.h>
// n-1 dhara prime cheak korlam

/*
int is_prime(int n)
{
    int i;
    if(n<2){
        return 0;
    }
    for(i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main()

{
    int n;
    while(1){
        printf("Enter A Number : ");
        scanf("%d",&n);
        if(n==0)
            break;
        if(1== is_prime(n)){
            printf("%d Is A Prime\n",n);
        }
        else
            printf("%d Is Not prime\n",n);
    }
    return 0;
}
*/
// n/2 loop calalei hoye jabe
// jehetu 2 diye vag jabe sehetu onno jor sonkha diye vag na korleo colbe

int is_prime(int n)
{
    int i;
    if(n<2)
        return 0;
    if (n==2)
        return 1;
    if(n%2==0)
        return 0;
    for(i=3;i<=n/2;i=i+2){
        if(n%i==0)
            return 0;
    }
    return 1;
}

int main()

{
    int n;
    while(1){
        printf("Enter A Number : ");
        scanf("%d",&n);
        if(n==0)
            break;
        if(1== is_prime(n)){
            printf("%d Is A Prime\n",n);
        }
        else
            printf("%d Is Not prime\n",n);
    }
    return 0;
}
