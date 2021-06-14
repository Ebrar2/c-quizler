#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<time.h>
//EBRAR TEMEL 200201085
void SanalUret(char liste[][70],int kisi)
{
    int i,x,j,y,z,a;
    srand(time(NULL));
    for(j=0;j<kisi;j++)
   {
        x=5+rand()%16;
        char d[21];
      //  printf("\nx:%d",x);
        for(i=0;i<x;i++)
     {
         a=97+rand()%26;
         d[i]=a;

         //printf("d[i]:%c\n",d[i]);
     }
     for(i=x;i<20;i++)
        d[i]=' ';
     d[i]='\0';
    strcpy(liste[j],&d);
    strcat(liste[j],"  ");
    x=5+rand()%16;
    char e[21];
   // printf("\nx:%d",x);
      for(i=0;i<x;i++)
     {
         a=65+rand()%26;
         e[i]=a;
        // printf("d[i]:%c\n",e[i]);
     }
     for( ;i<20;i++)
        e[i]=' ';
     e[i]='\0';
    strcat(liste[j],&e);
    strcat(liste[j],"  ");
   // printf("\n%s\n",liste[j]);
    x=5+rand()%6;
    char f[x];
      for(i=0;i<x;i++)
     {
         a=97+rand()%26;
         f[i]=a;
        // printf("d[i]:%c\n",f[i]);
     }
     f[i]='\0';
    strcat(liste[j],&f);
    strcat(liste[j],"@mazeret.com");
   // printf("\n%s\n",liste[j]);
   }
}
void Yazdir(char liste[][70],int kisi)
{
    int i;
    printf("\n\n\nAD                        SOYAD                              MAIL\n\n");
    for(i=0;i<kisi;i++)
        printf("%s\n",liste[i]);
}
int main()
{
    char liste[100][70];
    int kisi;
    printf("Kac adet sanal kisi uretilecektir:");
    scanf("%d",&kisi);
    SanalUret(&liste,kisi);
    Yazdir(&liste,kisi);
    return 0;
}
