#include <stdio.h>
#include <stdlib.h>

int main()
/*
{
    double ft_marks,st_marks,final_marks,total_marks;
    scanf("%lf %lf %lf",&ft_marks,&st_marks,&final_marks);
    total_marks=ft_marks/4.0+st_marks/4.0+final_marks/2.0;
    printf("Total Marks = %.1lf\n",total_marks);
    return 0;
}

*/
// array input output
// [index] array te index 0 theke suru hoye n-1 porjonto cole
// -n othoba n or n+ kisui thik man dekhabe nah
/*
{
  int ara[2]={1,2};// [] er moddhe jot nebo sekoyta man dewa jabe
  printf("%d",ara[1]); // [] er modde 1 kom dewa porjnto thik man dibe
  return 0;
}
*/
// ekbare sob array er man dekha
{
    int i,a[5];
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
        // printf("%d\n",a[i]); // etar theke nicer ta kora valo
    }
    for(i=0;i<5;i++){
            printf("\n");
        printf("Tolal %d\n",a[i]);
    }
}
// sob gular jnno alada alada input dite hobe eksathe dile hobe na
