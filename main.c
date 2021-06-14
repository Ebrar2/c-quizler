#include <stdio.h>
#include <stdlib.h>
float getCap(float r);
float getCemberCevre(float r,float pi);
float getCemberAlan(float r,float pi);
int main()
{
    float pi=3.14;
    float r;
    printf("Cemberin yaricapini giriniz:");
    scanf("%f",&r);
    printf("\nCemberin capi:%.2f",getCap(r));
    printf("\nCemberin cevresi:%.2f",getCemberCevre(r,pi));
    printf("\nCemberin alani:%.2f",getCemberAlan(r,pi));

    return 0;
}
float getCap(float r)
{
    float cap;
    cap=2*r;
    return cap;
}
float getCemberCevre(float r,float pi)
{
    float cevre;
    cevre=2*pi*r;
    return cevre;
}
float getCemberAlan(float r,float pi)
{
    float alan;
    alan=pi*r*r;
    return alan;
}
