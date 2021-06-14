#include <stdio.h>
#include <stdlib.h>
struct DTarih
{
   int gun;
   int ay;
   int yil;
 };
struct sahis_bilgileri
{
   char Ad[50];
  struct DTarih dogum_tarihi;
 };
 struct sahis_bilgileri Enb(struct sahis_bilgileri x[],int n)
 {
    struct sahis_bilgileri a;
    struct sahis_bilgileri enb;
    int i,j;
    enb=x[i];
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
      {
        if(enb.dogum_tarihi.yil>x[j].dogum_tarihi.yil)
             enb=x[j];
       else if(enb.dogum_tarihi.yil==x[j].dogum_tarihi.yil && enb.dogum_tarihi.ay>x[j].dogum_tarihi.ay)
        enb=x[j];
       else if(enb.dogum_tarihi.yil==enb.dogum_tarihi.yil && enb.dogum_tarihi.ay==x[j].dogum_tarihi.ay && enb.dogum_tarihi.gun>x[j].dogum_tarihi.gun)
       enb=x[j];
      }
    }
    return enb;
 };
int main()
{
    int n,i;
    printf("Kisi sayisini giriniz:");
    scanf("%d",&n);
    struct sahis_bilgileri x1[n];
    struct sahis_bilgileri enB;
    printf("\nBilgieri giriniz:\n");
    for(i=0;i<n;i++)
    {
        printf("\nAdi:");
        scanf("%s",&x1[i].Ad);
        printf("\nDogdugu gun:");
        scanf("%d",&x1[i].dogum_tarihi.gun);
        printf("\nDogdugu ay:");
        scanf("%d",&x1[i].dogum_tarihi.ay);
        printf("\nDogdugu yil:");
        scanf("%d",&x1[i].dogum_tarihi.yil);
    }
    printf("\n\nKayitlar yazdirilyor...\n");
    for(i=0;i<n;i++)
    {
        printf("Ad:%s\n",x1[i].Ad);
        printf("Dogum tarihi:%d.%d.%d\n",x1[i].dogum_tarihi.gun,x1[i].dogum_tarihi.ay,x1[i].dogum_tarihi.yil);
    }
    enB=Enb(x1,n);
    printf("\n\nYasi en buyuk kisi:%s %d.%d.%d",enB.Ad,enB.dogum_tarihi.gun,enB.dogum_tarihi.ay,enB.dogum_tarihi.yil);
    return 0;
}
