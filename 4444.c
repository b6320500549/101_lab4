#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main() {
  char sr[1000] , g[11][5]={"i","of","the","on","at","for", "with", "a", "an" , "in" ,"and"} ;
  char *m;
  int a=0,b,j,i=0,k=0;
  scanf("%1000[^\n]s",sr);
  for(j=0; sr[j]!='\0'; j++)
  {
        if((sr[j]<='a'&&sr[j]>='z')||sr[j]!=' ')
        {
            i++;
        }
  }
  if(i!=0)
  {
       m= strtok(sr," ");
  while(m != NULL)
    {
        for(b=0;b<11;b++)
          if(strcmp(m,g[b]))
            k++;
        if(k==11||a==0)
         {
             printf("%c",toupper(m[0]));
         }

    m = strtok(NULL," ");
    a++, k=0;
   }
    }
return 0;
}
