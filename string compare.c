#include <stdio.h>
#include <stdlib.h>
#include<string.h>
// -1 hole soto +1 hole boro 0 hole soman
int string_compare(char a[], char b[]){
    int i ;
    /*char string_length1=strlen(a);
    char string_length2 = strlen(b);*/
    for(i=0;a[i]!= "\0" && b[i]!="\0";i++){
        if(a[i]<b[i])
            return -1;
        else if(a[i]>b[i])
            return 1;
        else if(a[i]== b[i])
            return 0;
    }
    /*if(string_length1 == string_length2)
        return 0;
    else if(string_length1 < string_length2)
        return -1;
    else if(string_length1 > string_length2)
        return 1;*/
}
int main()
{
    char a[5];
    char b[5];
    scanf("%s %s",&a,&b);
    int result = string_compare(a,b);
    if(result== -1)
        printf("%s Is Smaller Than %s\n",a,b);
    else if(result== 1)
        printf("%s Is Grater Than %s\n",a,b);
    else if(result == 0)
        printf("%s Is Equal %s\n",a,b);
    return 0;
}
