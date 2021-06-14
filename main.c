#include <stdio.h>
#include <stdlib.h>
int uzunluk(char *d)
{
    int i,a=0;
    for(i=0;d[i]!='\0';i++)
    {
        if(d[i]!=' ')
            a++;
    }
    return a-1;
}
int main()
{
    char d[50],*pnt;
    int i,a=0,b;
    pnt=&d[0];
    int sesli,sessiz;
    printf("String giriniz:");
    fgets(d,50,stdin);
    b=uzunluk(d);
    printf("\nUzunluk:%d",b);
    for(i=0;pnt[i]!='\0';i++)
    {
        if(pnt[i]=='a' || pnt[i]=='A'|| pnt[i]=='e' || pnt[i]=='E' || pnt[i]=='o' || pnt[i]=='O' || pnt[i]=='i' || pnt[i]=='I' || pnt[i]=='u' || pnt[i]=='U')
            a++;
    }
    sesli=a;
    sessiz=b-a;
    printf("\nSesli harf sayisi:%d",sesli);
    printf("\nSessiz harf sayisi:%d",sessiz);
    return 0;
}
