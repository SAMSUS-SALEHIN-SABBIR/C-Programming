#include <stdio.h>
#include <stdlib.h>

int main()

/*
{
    int ft_marks[5]={70,80,77,88,90},st_marks[5]={50,60,80,90,70},final_marks[5]={90,75,66,58,77};
    int i;
    double total_marks;
    for(i=0;i<5;i++){
        total_marks=ft_marks[i]/4.0+st_marks[i]/4.0+final_marks[i]/2.0;// invalid oparend eeror dekay jobi array declear na kori
        //printf("%.1lf\n",total_marks);
    }
    for(i=0;i<5;i++){
        printf("Roll No : %d\tTotal Marks : %.1lf\n",i+1,total_marks);
    }
    return 0;
}
*/

// pottektay number koto jon pelo

/*
{
    int marks,i,count;
    int total_marks[]={61,62,77,88,90,88,77,77,60,91};
    for(marks=50;marks<=100;marks++){
        count=0;
        for(i=1;i<=10;i++){
            if(total_marks[i]==marks){
                count++;
            }
        }
        printf("Marks : %d Count : %d\n",marks,count);
    }
    return 0;
}

*/
// onnorokom kori

{
    int i;
    int total_marks[]={100,99,90,70,80,50,60,44,50,73};
    int marks_count[101];
    for(i=1;i<=101;i++){
        marks_count[i]=0;
    }
    for(i=1;i<=10;i++){
        marks_count[total_marks[i]]++;
    }
    for(i=44;i<=100;i++){
        printf("Marks : %d Count : %d\n",i,marks_count[i]);
    }
    return 0;
}
