#include <stdio.h>
#include <stdlib.h>
/*
int str_len(char str[]){ // char type peramete nibe
    int i, len = 0;
    for(i=0;str[i]!='\0';i++){ // jtokkhn na string er sesh hobe colbe totokkhn
        len++; // jehetu string ekta char type array sehetu 0 theke suru hobe and colbe null char na pawa porjnto
        // poti spece count korbe
    }
    return len;
}
/*
int str_len(char str[]){
int i;
for(i= 0;str[i]!= NULL;i++)
 ; // amar kno kaj korar dorkar nai so just ekta faka state ment likhe dilam
 return i;


}

*/
/*
int main()
{
    char name[100];
    int length;
    while(1==scanf("%s",&name)){// jotokkhn issa nibe input
        length = str_len(name);// funtion call with peramiter
        printf("length : %d",length);
    }
    return 0;
}
*/
// amra ekta input newar karone space dile seta venge jay tai alada alada hisab korbe
// string input nite & dewana dewa soman kotha
// jehetu 'space' nisse na ei somossa eranor jnno amra onno ekta kaj korte pari
//
int main (){
    char name[100];
    while(NULL != gets(name)){
        printf("%s\n",name);
    }
    return 0;
}
// ctrl + d caple programm ti off hobe
