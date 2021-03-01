#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main() {
  char sr[1000] , g[11][5]={"i", "of", "the","on", "at", "for", "with", "a", "an" , "in" ,"and"} ;
  char *m;
  int i=0,j,k=0;
  scanf("%s",sr);
  m= strtok(sr," ");
  while(m != NULL) {
        for(j=0;j<10;j++)
          if(strcmp(m,g[j]))
            k++;
        if(k==10||i==0)
          printf("%c",toupper(m[0]));
    m = strtok(NULL," ");
    i++, k=0;
}
return 0;
}
