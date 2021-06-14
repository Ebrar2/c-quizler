#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include<math.h>
void SayiBul(char k[100],int d[100],int *n)
{
    int i,say=0,gec,a=0;
    int top=0;
    int d2[100]={-1};
    for(i=0;k[i]!='\0';i++)
    {
        a=0;
        if(isdigit(k[i]))
        {
            d[say]=atoi(k+i);
            gec=d[say];
            while(gec!=0)
            {
                 gec=gec/10;
                 a++;
            }
            i=i+a-1;
            say++;
        }
    }
    *n=say;
}
void SayiSirala(int d[],int n)
{
    int i=0,j,gec;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(d[i]<d[j])
            {
                gec=d[i];
                d[i]=d[j];
                d[j]=gec;
            }
        }
    }
}
int main()
{
    char k[100];
    int i,n;
    int d[100]={0};
    printf("Input:");
    fgets(k,100,stdin);
    SayiBul(k,d,&n);
    SayiSirala(d,n);
    printf("\n\nSiralanmis sayilar:\n");
    for(i=0;i<n;i++)
        printf("%d\n",d[i]);
    return 0;
}
