#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int main()
{
    int d[10],i,j,gecici,c=0,t=0;
    printf("Rastgele dizi:\n");
    srand(time(NULL));
    for(i=0;i<10;i++)
    {
    d[i]=rand()%101;
     printf("%d,",d[i]);
    }
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
          {
         if(d[i]>d[j])
           {
           gecici=d[j];
           d[j]=d[i];
           d[i]=gecici;
           }
          }
    }
      printf("\n\nSirali dizi:");
      for(i=0;i<10;i++)
       {
       printf("%d,",d[i]);}

       printf("\n\n");
       printf("Once tek sonra cift sayilar sirali dizi\n");
    for(i=0;i<10;i++)
  {
   if(d[i]%2==0)
    c++;
    else
    t++;

}
   int cift[c],tek[t];
    int a=0,b=0;
   for(i=0;i<10;i++)
   {
   if(d[i]%2==0)
    {
   cift[a]=d[i];
   a++;
  }
   else
   {
   tek[b]=d[i];
    b++;
   }
   }
  for(int i=0;i<t;i++)
  printf("%d,",tek[i]);
   for(int i=0;i<c;i++)
   printf("%d,",cift[i]);

    return 0;
}
