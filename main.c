#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>
int AracBilgiAl(char d[][100])
{
    char *k;
    int i=0;
     do
     {
         fgets(d[i],100,stdin);
         fflush(stdin);
         k=strstr(d[i],"END");
         i++;
     }
    while(k==NULL);
    for(int j=0;j<i;j++)
        printf("\n%s",d[j]);
    return i-1;
}
int DogruGirisListele(char d[50][100],int x)
{
    int i,say=0,gec=0,uretimY;
    float benzin;
    char *k,*a,marka[10];
     for(i=0;i<x;i++)
       {
           gec=0;
         k=strstr(d[i]," ");
       while(k!=NULL)
      {
           gec++;
          k=strstr(k+1," ");
       }
       strcpy(marka,strtok(d[i]," "));
       uretimY=atoi(strtok(NULL," "));
       benzin=atof((strtok(NULL," ")));
       if(gec==2 && uretimY!=0 && benzin!=0.0)
         printf("%20s %-10d %.1f\n",marka,uretimY,benzin);
    }

}
int main()
{
     char d[50][100];
     int i=0;
     i=AracBilgiAl(d);
     DogruGirisListele(d,i);
    return 0;
}
