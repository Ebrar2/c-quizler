#include <stdio.h>
#include <stdlib.h>
int pw(int s,int r)
{
    int i=0,pw=1;
    for(i=0;i<r;i++)
        pw=pw*s;
    return pw;
}
void armstrong(int *ptr)
{
    int x,arms=0,gec,say=0;
    gec=*ptr;
    while(gec!=0)
    {
        gec=gec/10;
        say++;
    }
    gec=*ptr;
      while(gec!=0)
    {
        x=gec%10;
        arms=arms+pw(x,say);
        gec=gec/10;
    }
    if(arms==*ptr)
        printf("\n%d sayisi armstrong sayidir",*ptr);
    else
        printf("\n%d sayisi armstrong degildir",*ptr);
}
int main()
{
    int say;
    printf("Bir sayi giriniz:");
    scanf("%d",&say);
    armstrong(&say);
    return 0;
}
