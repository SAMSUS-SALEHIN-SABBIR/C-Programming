#include <stdio.h>
#include <stdlib.h>
// mone rakhjte hobe
// low , high , n

 // algorithm
 /* 1 : mid = (low + high)/2
 2 : if mid == n than go we got it
 3 : if n > mid than low = mid + 1; repeat step 1
 4 : if n < mid than high = mid - 1;
 */
 /*
 first declear low and high n
 than loop calabo condition aply korbo
 */

int main()
{
    int ara[] = {1,2,3,4,5};
    int low_indax = 0;
    int high_indax = 4;
    int mid_indax;
    int num = 3;
    while(low_indax <= high_indax)
    {
        mid_indax = (low_indax + high_indax)/2;
        if (num == ara[mid_indax]){
            break;
        }
        if (num < ara[mid_indax]){
            high_indax = mid_indax - 1;
        }
        else {
            low_indax = mid_indax + 1;
        }
    }
    if (low_indax > high_indax){
        printf("%d is not in the array\n",num);
    }
    else {
        printf("%d is found in the array . it is the %d element of the array.\n",ara[mid_indax],mid_indax);
    }
    return 0;
}
