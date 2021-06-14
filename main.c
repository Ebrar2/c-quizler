#include <stdio.h>
#include <stdlib.h>
//EBRAR TEMEL 200201085
void xParseSeconds (int seconds);
int main()
{
    int saniye;
    printf("Saniye bilgisini giriniz:");
    scanf("%d",&saniye);
    xParseSeconds(saniye);
    return 0;
}
void xParseSeconds (int seconds)
{
    int san,saat,dk;
    saat=seconds/3600;
    dk=(seconds-saat*3600)/60;
    san=(seconds-(saat*3600+dk*60));
    printf("%d saat %d dakika %d saniye",saat,dk,san);

}
