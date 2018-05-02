#include <stdio.h>
#include <stdlib.h>

int main()
/*
{
    int a[5]={10,20,30,40,50};
    int i;
    for(i=0;i<5;i++){
    printf("%d %d\n",i+1,a[i]);
    }
    return 0;
}
*/
// array er man gula print korlam
// bt amra sedh theke suru evabe print korte cai

/*
{
    int a[5]={10,20,30,40,50};
    int i;
    for(i=4;i>=0;i--){
    printf("%d %d\n",i+1,a[i]);
    }
    return 0;
}
*/
/* // emn hobe nah eksathe korte cai
{
    int a[5]={1,2,3,4,5};
    int b[5];
    int i,j;
    for(i=0;i<5;i++){
            printf("%d\n",a[i]);
    }
    for(j=4;j>=0;j--){
            printf("\n%d\n\n",a[j]);

    }
}
*/
// eivebe o print kora jay

/*
{
    int a[5]={1,2,3,4,5};
    int b[5];
    int i,j;
    for(i=0,j=4;i<5;i++,j--){
            b[j]=a[i];
            // printf("%d",b[j]); ki man dey dekhlam .. a er manb te niye gese
    }
    for(i=0;i<5;i++){
        //printf("%d",b[i]); // evabe dekhate pari bt amra a tei dekhabo tai nicer kaj ta korbo
        a[i]=b[i];
        printf("%d\n",a[i]);
    }

}
*/
// ekta araay tei programme ta kivabe kora jay dekhbo
// system ta
/* t=a[4];
   a[4]=a[0];
   a[0]=t;
 */
{
   int a[4]={1,2,3,4};
   int i,j,temp;
   for(i=0,j=3;i<2;i++,j--){
    temp=a[j];
    //printf("%d\n",temp);
    a[j]=a[i];
    //printf("%d\n",a[j]);
    a[i]=temp;
    //printf("%d\n",a[i]);
    }
    for(i=0;i<4;i++){
        printf("%d\n",a[i]);
    }
}
//hoise
// ekta vul mara kori seta holo sobgulakei kora lagbe na ordhek korte hobe
