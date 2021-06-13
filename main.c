#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<string.h>
//EBRAR TEMEL 200201085
struct Ogrenci
{
    int ders_id;
    int  ogrenci_id;
    char dersler_dizisi[3][10];
    int aldigi_vize_notlari[3];
    int aldigi_final_notlari[3];
};
struct FinalVize
{
    float vize[3];
    float final1[3];
};
void a_ortalama(struct Ogrenci *d,struct FinalVize *not)
{
    int i,j;
    int top1=0,top2=0;
    float vizeO,finalO;
    for(j=0;j<3;j++)
    {
        top1=0;
        top2=0;
            for(i=0;i<3;i++)
    {
        top1=top1+d->aldigi_vize_notlari[i];
        top2=top2+d->aldigi_final_notlari[i];;
    }
    vizeO=(float)top1/3;
    finalO=(float)top2/3;
    not->final1[j]=finalO;
    not->vize[j]=vizeO;
    printf("%s dersinin vize ort:%.2f final ort:%.2f\n",d->dersler_dizisi[j],vizeO,finalO);
    }
}
void random_not(struct Ogrenci *d,int n)
{
    int x=0,i;
    srand(time(NULL));
    for(x=0;x<n;x++)
    {
       for(i=0;i<3;i++)
        {

            (d+x)->ogrenci_id=rand()%101;
            (d+x)->aldigi_final_notlari[i]=rand()%101;
             (d+x)->aldigi_vize_notlari[i]=rand()%101;

        printf("ogrenici id:%d vize:%d final:%d \n",d->ogrenci_id,d->aldigi_vize_notlari[i],d->aldigi_final_notlari[i]);
        }
    }
}
int main()
{
    int i,j,n=101;
    while(n>100)
    {
          printf("Ogrenci sayisini giriniz:(Max 100):");
          scanf("%d",&n);
    }
    struct Ogrenci d[n];
    struct Ogrenci e;
    struct FinalVize not[n];
    struct FinalVize deg;
    for(i=0;i<n;i++)
    {
        strcpy(d[i].dersler_dizisi[0],"Matematik");
        strcpy(d[i].dersler_dizisi[1],"Fizik");
        strcpy(d[i].dersler_dizisi[2],"Kimya");
    }
    random_not(d,n);
    for(i=0;i<n;i++)
    {
          srand(time(NULL));
          a_ortalama(d+i,not+i);
          printf("\n");
    }
    printf("\n\n\nMatematike gore siralama\n");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(not[i].final1[0]<not[j].final1[0])
            {
                deg=not[i];
                not[i]=not[j];
                not[j]=deg;
                d[i]=e;
                d[i]=d[j];
                d[j]=e;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("Ogrenci id:%d vize:%.2f final:%.2f\n",d[i].ogrenci_id,not[i].vize[0],not[i].final1[0]);
    }
    return 0;
}
