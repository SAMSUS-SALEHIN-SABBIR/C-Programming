#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[] ="Bangla";
    char str2[] = " Desh";
    char str3[100];
    int i,j,length1=6,length2=5;// duita variable tai 2 ta index er jnno i ,j use korlam
    for(i=0,j=0;i<length1;i++,j++){// 0 - 6 porjnto colbe
        str3[j] = str1[i];// str1 er man gula str3 te rakhbe
    }
    for(i=0;i<length2;i++,j++){// j nei ni karon amra suru theke na suru kore sesh nibo
        str3[j] = str2[i]; // str3 te bakigula assain korbe
    }
    str3[j] = '\0';// mul bepar str ke sesh korar jnno null use koresi

    printf("%s\n",str3);
    return 0;
}
