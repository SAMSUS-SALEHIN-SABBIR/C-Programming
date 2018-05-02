#include <stdio.h>
#include <stdlib.h>

int main()
{
    //char name[] = {'r','o','n','y'};// evabe lekha thik nah
    //char name[] = "rony";
    char name2[]="RONY";
    int i,len;
    //printf("%s\n",name);
    len = 4;
    for(i=0;i<len;i++){
       /* if(name[i]>=97 && name[i]<=122){
            name[i] = 'A' + (name[i]-'a');
        }
        else */if(name2[i]>=65 && name2[i]<=90){
            name2[i] = 'a' + (name2[i] - 'A');
        }
    }
    //printf("%s\n%s\n",name,name2);
    printf("%s\n",name2);
    return 0;
}
