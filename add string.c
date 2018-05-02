#include <stdio.h>
#include <stdlib.h>


int string_length(char str[]){
    int i;
    for(i=0;str[i]!='\0';i++)

    return i;
}
int main()

// add korte arekta string lage
{
    char s1[]="Bangla",s2[]="desh",s3[12];
    int i,j,length1=6,length2=4;
    //gets(s1);
    //length1= string_length(s1);
    //gets(s2);
    //length2= string_length(s2);
    for(i=0,j=0;i<length1;i++,j++){
        s3[j]=s1[i];
    }
    for(i=0;i<length2;i++,j++){
        s3[j]=s2[i];
    }
    s3[j]='\0';
    printf("%s\n",s3);
    return 0;
}
