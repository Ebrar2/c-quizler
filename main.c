#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include<string.h>
int main()
{
    FILE *dosya=fopen("test.txt","r");
    if(dosya==NULL)
    {
        printf("Dosya acilamadi");
        exit(1);
    }
    int i=0,j=0,a=0,d[100],gec=0,say=0;
    char x[100];
    while(fgets(x,100,dosya)!=NULL)
    {
        printf("%s\n",x);
        for(i=0;x[i]!='\0';i++)
        {
            if(isdigit(x[i]))
            {
               // printf("\natoi:%d\n",atoi(x+i));
                d[a]=atoi(x+i);
                //printf("d[a]:%d\n",d[a]);
                gec=d[a];
                say=0;
                while(gec!=0)
                    {
                        gec=gec/10;
                        say++;

                    }
                if(say!=1)
                  {
                    a++;
                    i=say+i-1;
                  }
            }
        }
    }
    j=a;
    printf("\n\ndizi\n");
    for(i=0;i!=j;i++)
        printf("%d ",d[i]);
    fclose(dosya);
    return 0;
}
