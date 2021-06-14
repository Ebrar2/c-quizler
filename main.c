#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>
void print_array(const char arr[][100])
{
     int i,j,x=0;
     for(i=0;i<5;i++)
     {
         x=0;
         for(j=strlen(arr[i])-1;j>-1;j--)
             {
                  printf("%c",arr[i][j]);
             }
             printf(" uzunluk:%d\n",strlen(arr[i]));
     }
}
int main()
{
    int i;
    char d[5][100]={"Bilgisayar Muhendisligi Bilgisayar Laboratuvari",
              "Birinci Sinif",
              "String cumlelerin uzunluk toplamini bulun.",
              "sureniz yetmis bes dakika",
              "soruyu dikkatli okuyun!"};
    printf("Ilk Cumleler:\n");
   for(i=0;i<5;i++)
      printf(" '%s'  uzunluk:%d\n",d[i],strlen(d+i));
     printf("\n\nTers Cevrilmis Hali:\n");
    print_array(d);


    return 0;
}
