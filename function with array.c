#include <stdio.h>
#include <stdlib.h>
// find big nymber
/*int max_num(int arr[], int n)
{
    int i;
    int max = arr[0];
    for (i=1;i<n;i++){ // arr[0] to agei newa tai ar nilam nah
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    return max;
}
int main()
{
    int n=11,i,max;
    int arr[n];
    for(i = 0;i < n;i++){
    scanf("%d",&arr[i]);
    }
    //max = max_num(); // vul karon peramiter pathai nai
    max = max_num(arr,n);
    printf("\n\n%Max number is : = d\n",max);
    return 0;
}
*/
// funtion use korar jnno obossoi mone rakhte hobe peramiter er kotha
/*
// min
int min_num(int arr[], int n)
{
    int i;
    int min = arr[0];
    for (i=1;i<n;i++){ // arr[0] to agei newa tai ar nilam nah
        if(arr[i]<min)
        {
            min = arr[i];
        }
    }
    return min;
}
int main()
{
    int n=11,i,min;
    int arr[n];
    for(i = 0;i < n;i++){
    scanf("%d",&arr[i]);
    }
    //max = max_num(); // vul karon peramiter pathai nai
    min = min_num(arr,n);
    printf("\n\nMin number is : = %d\n",min);
    return 0;
}
*/
//sum and avarage

/*
#include <stdio.h>
#include <stdlib.h>
// find big nymber
int sum_ava(int arr[], int n)
{
    int i;
    int sum = arr[0];
    for (i=0;i<n;i++){ // arr[0] to agei newa tai ar nilam nah
         sum = sum + arr[i];
         //printf("%d",sum); bar bar print korbe
    }
    printf("%d\n",sum);
    int ava = sum / n;
    return ava;
}
int main()
{
    int n=11,i,ava;
    int arr[n];
    for(i = 0;i < n;i++){
    scanf("%d",&arr[i]);
    }
    //max = max_num(); // vul karon peramiter pathai nai
    ava = sum_ava(arr,n);
    printf("\n\nAvarage  number is : = %d\n",ava);
    return 0;
}
*/
//area
int find_area(int arr[], int n)
{
    int i;
    double area;
    for (i=0;i<n;i++){ // arr[0] to agei newa tai ar nilam nah
         area = arr[i]*arr[i]*3.14;
         //printf("%d",sum); bar bar print korbe
         printf("\n%.2lf\n",area);
    }
    return 0;
}
int main()
{
    int n=11,i;
    double area;
    int arr[n];
    for(i = 0;i < n;i++){
    scanf("%d",&arr[i]);
    }
    //max = max_num(); // vul karon peramiter pathai nai
    area = find_area(arr,n);
    //printf("\n\nArea  number is : = %d\n",area);
    return 0;
}
