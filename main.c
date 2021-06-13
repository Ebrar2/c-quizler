#include <stdio.h>
#include <stdlib.h>
//EBRAR TEMEL 20020105
int main()

{
    //kurenin alaný
    float p = 3.14;
    int r;
    float alan;
    printf("Kurenin r sini giriniz= ");
    scanf("%d", &r);

    alan=(4*p*r*r);
    printf("Kurenin yuzey alani %.2f birim  \n", alan );

    //kupun alaný
    int e;
    int kup;
    printf("Kupun e sini giriniz = ");
    scanf("%d" , &e);
    kup=(6*e*e);
    printf("Kupun yuzey  alani  %d  \n" , kup );




    return 0;
}
