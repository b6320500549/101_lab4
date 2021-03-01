#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,o,u=0;
    scanf("%d",&n);
    if(n>0&&n<100)
    {
        char w[n][50];
        for(i=0; i<n; i++)
        {
            scanf("%[^\n]s",w[i]);
        }
        for(i=0; i<n; i++)
        {
            for(j=0; w[j]!='\0'; j++)
            {

            }
            for(i=0; i<n; i++)
            {
                for(j=0; w[j]!='\0'; j++)
                    if(w[i][j]>='A'&&w[i][j]<='E')
                    {
                        if(w[i][j]=='A')
                        {
                            if(o==1)
                                o=1;
                            else if(o==2)
                                o=3;
                            else if(o==3)
                                o=2;
                            else
                                o=4;
                        }
                        else if(w[i][j]=='B')
                        {
                            if(o==1)
                                o=4;
                            else if(o==2)
                                o=2;
                            else if(o==3)
                                o=3;
                            else
                                o=1;
                        }
                        else if(w[i][j]=='C')
                        {
                            if(o==1)
                                o=3;
                            else if(o==2)
                                o=4;
                            else if(o==3)
                                o=1;
                            else
                                o=2;
                        }
                        else if(w[i][j]=='D')
                        {
                            if(o==1)
                                o=2;
                            else if(o==2)
                                o=1;
                            else if(o==3)
                                o=4;
                            else
                                o=3;
                        }
                        else if(w[i][j]=='E')
                        {
                            if(o==1)
                                o=4;
                            else if(o==2)
                                o=3;
                            else if(o==3)
                                o=2;
                            else
                                o=1;
                        }

                    }
                    else
                        break;

            }
            printf("%d\n",o);
        }
        return 0;
    }
