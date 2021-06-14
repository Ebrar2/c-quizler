#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include<string.h>
#include<time.h>
struct araba
{
    char *marka;
    int maxhiz;
    float konum;
};
struct sehir
{
    char *isim;
    int konumx;
    int konumy;
};
void sehir_doldur(struct sehir p[], int sehirS)
{
    int i;
    for(i=0;i<sehirS;i++)
    {
        p[i].isim=(struct sehir *)(malloc(sizeof(struct sehir)*5));
        printf("%d.Sehrin adini giriniz:",i+1);
        scanf("%s",p[i].isim);
        fflush(stdin);
        printf("%d.sehir icin x konumunu giriniz:",i+1);
        scanf("%d",&p[i].konumx);
        fflush(stdin);
        printf("%d.sehir icin y konumunu giriniz:",i+1);
        scanf("%d",&p[i].konumy);
        printf("\n\n");
    }
}
void araba_doldur(struct araba a[], int arabaS)
{
    int i;
    for(i=0;i<arabaS;i++)
    {
        a[i].marka=(struct araba *)(malloc(sizeof(struct araba)*20));
        printf("%d.arabanin markasini giriniz:",i+1);
        scanf("%s",a[i].marka);
        fflush(stdin);
        printf("%d.arabanin maksimum hizini giriniz:",i+1);
        scanf("%d",&a[i].maxhiz);
        fflush(stdin);
    }
}
struct araba yaris_simulasyon(struct araba a[], int arabaS, float uzaklik)
{
    int i,say=1;
    float konum,top=0.0;
    struct araba kazanan;
    printf("\n\n-------------------------SIMILASYON BASLIYOR---------------------------------\n\n");
    for(i=0;i<arabaS;i++)
        a[i].konum=0.0;
    srand(time(NULL));
    while(1)
    {
      top=0.0;
      printf("\n-----%d.adim-------\n",say);
      for(i=0;i<arabaS;i++)
    {
        konum=a[i].maxhiz*3/4+rand()%(a[i].maxhiz-a[i].maxhiz*3/4);
        a[i].konum=a[i].konum+konum;
        printf("%d.arabanin konumu:%f(+%f)\n",i+1,a[i].konum,konum);
          if(a[i].konum>uzaklik)
           {
                kazanan=a[i];
                return kazanan;
           }
    }
      say++;
    }
};
int main()
{
    struct sehir *p;
    struct araba *a;
    struct araba kazanan;
    float uzaklik;
    int arabaS,i,say=1,say2=1,x,y;
    int sehirS;
    printf("Sehir sayisini  giriniz:");
    scanf("%d",&sehirS);
    p=(struct sehir *)(malloc(sizeof(struct sehir)*sehirS));
    sehir_doldur(p,sehirS);
    fflush(stdin);
    printf("\n\nAraba sayisini giriniz:");
    scanf("%d",&arabaS);
    a=(struct araba *)(malloc(sizeof(struct araba)*arabaS));
    araba_doldur(a,arabaS);
    char baslangic[5],hedef[5];
    printf("\n\nBaslangic sehrini giriniz:");
    scanf("%s",baslangic);
    fflush(stdin);
    printf("Hedef sehri giriniz:");
    scanf("%s",hedef);
    while(1)
    {
        say=0;
        say2=0;
       for(i=0;i<sehirS;i++)
    {
          if(strcmp(baslangic,p[i].isim)==0)
           {
               say++;
               x=i;
            }
          if(strcmp(hedef,p[i].isim)==0)
            {
                say2++;
                y=i;

            }
           }
        if(say!=0 && say2!=0)
            break;
        printf("\nHedef veya baslangic sehri bulunamadi\n");
        printf("Tekrar giriniz\n");
        printf("\n\nBaslangic sehrini giriniz:");
        scanf("%s",baslangic);
        printf("Hedef sehri giriniz:");
        scanf("%s",hedef);
    }
    uzaklik=sqrt((pow(p[x].konumx-p[y].konumx,2))+(pow(p[x].konumx-p[y].konumy,2)));
    printf("\n\nuzakklik:%f\n",uzaklik);
    kazanan=yaris_simulasyon(a,arabaS,uzaklik);
    printf("\n\n------------------------SIMULASYON SONA ERDI----------------------------------\n\n");
    printf("Kazanan\n");
    printf("Marka:%s\n",kazanan.marka);
    printf("Max hiz:%d\n",kazanan.maxhiz);
    printf("Konum:%f",kazanan.konum);
    free(p);
    free(a);
    return 0;
}
