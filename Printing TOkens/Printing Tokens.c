#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i,j;
    char a[1000];
    gets(a);
    for(i=0;i<strlen(a);i++)
    {
       if(a[i]!=' ')
       {
           printf("%c",a[i]);
       }
       else if(a[i]==' ')
       {
           printf("\n");
 
       }
    }
return 0;
}

