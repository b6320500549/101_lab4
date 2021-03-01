#include<stdio.h>
#include<string.h>
int main()
{
 char w[200];
 int i=0;
 gets(w);
 for(i=0;w[i]!='\0';i++)
 {
     if(w[i]==w[i+1])
     {
         for(j=i;w[j]!=w[j+1];j++)
         {

         }
         if(w[j]!=' ')
         {
             printf("%c",w[j-1]);
         }

     }

 }
}
