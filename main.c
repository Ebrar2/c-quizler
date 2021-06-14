#include <stdio.h>
#include <stdlib.h>
//EBRAR TEMEL 200201085

int main()
{
    int ilk,son,a,b,kontrol=0;
    printf("Ilk deger:");
    scanf("%d",&ilk);
    printf("Son deger:");
    scanf("%d",&son);
    if(ilk>son){
    printf("Asal sayilar %d ile %d arasindaki:",son,ilk);
    for(a=ilk;a>=son;a--)
    {
        kontrol=0;
       for(b=2;b<=a/2;b++){
        if(a%b==0){
            kontrol=1;}
        }
        if(kontrol==0 && a!=0 && a!=1){
            printf("%d,",a);
        }
    }}
    if(ilk<son){
    printf("Asal sayilar %d ile %d arasindaki:",ilk,son);
    for(a=ilk;a<=son;a++)
    {
        kontrol=0;
       for(b=2;b<=a/2;b++){
        if(a%b==0){
            kontrol=1;}
        }
        if(kontrol==0 && a!=0 && a!=1){
            printf("%d,",a);
        }
    }}
    return 0;
}
