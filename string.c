#include <stdio.h>
#include <stdlib.h>

//int main()

/*
{
    char country[]={'I','n','d','i','a'};
    printf("%s\n",country);
    return 0;
}
*/
/*
{
    char country[]={'I',' ','A','m','.','\0'};
    printf("%s\n",country);
    return 0;
}
// laste null char dite hobe nahole vul dekhabe

*/
/*

eta vul ase pore thik korbo
{
    char ch='c';
    ch='A'+(ch-'a');
    printf("%s",ch);
    return 0;
}

*/
/*
// sto thee boro
{
    char country[]="Bangladesh";
    int i,length;
    printf("%s\n",country);
    length=10; // eta lagbei
    for(i=0;i<length;i++){
        if(country[i]>='a' && country[i]<='z'){// jei case korbo sei case bosbe condition e
            country[i]='A'+country[i]-'a';// boro koraar jnnno korlam
        }
    }
    printf("%s\n",country);// loop er baire
    return 0;
}
*/

// boro theke sto korte ulta ta kora lagb

int string_length(char str[]){
    int i,length=0;
    for(i=0;str[i]!='\0';i++){// mosto  boro vul korsilam reh
        length++;
    }
    return length;
}
int main(){
    char country[100];
    int length;
    /*
    while(1==scanf("%s",country)){
        length = string_length(country);
        printf("length : %d\n",length);
    }
    */
    while(NULL !=gets(country)){
        length = string_length(country);
        printf("Length : %d\n",length);
    }
    return 0;
}
