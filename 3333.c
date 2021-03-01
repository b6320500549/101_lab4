#include<stdio.h>
#include<string.h>
int main()
{
 char w[200];
 int i=0,j=0;
 gets(w);
 for(i=0;w[i]!='\0';i++)
 {
     if(w[i] != w[i+1])
     {
        if(w[i]!=' ')
        printf("%c",w[i]);
     }
 }
}
