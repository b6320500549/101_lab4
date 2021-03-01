#include<stdio.h>
int main()
{
    int m=4,i,j,c,n=0,f=0;
    if(m>3&&m<1000)
        scanf("%d",&m);
    int d[m][3],k[m];
    for(i=0; i<m; i++)
        for(j=0; j<3; j++)
            scanf("%d",&d[i][j]);
    for(i=0; i<m-2; i++)
    {
        for(j=0; j<3; j++)
        {
            if(j==0)
                k[i]+=(d[i][j]*4)+(d[i+1][j]*4)+(d[i+2][j]*4);
            else if (j==1)
                k[i]+=(d[i][j]*2)+(d[i+1][j]*2)+(d[i+2][j]*2);
            else if (j==2)
                k[i]+=(d[i][j])+(d[i+1][j])+(d[i+2][j]);

        }
    }
    c=k[0];
    for(i=0; i<m-2; i++)
    {
        if(c<k[i])
        {
            c=k[i];
            n=i;

        }
    }
    c=k[0];
    for(i=0; i<m-2; i++)
    {
        if(c>k[i])
        {
            c=k[i];
            f=i;

        }
    }
    printf("%d %d",n+1,f+1);
    return 0;
}
