
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int main()
{
     int n,i,j,gec;
     printf("\nMatrisin boyutunu giriniz:");
     scanf("%d",&n);
     int d[n][n];
     srand(time(NULL));
     for(i=0;i<n;i++)
     {
         for(j=0;j<n;j++)
            d[i][j]=rand()%10;
     }
     printf("\n\nRastgele eleman atanan dizi:\n");
     for(i=0;i<n;i++)
     {
         for(j=0;j<n;j++)
            printf("%d ",d[i][j]);
        printf("\n");
     }

     for(i=0;i<n;i++)
     {
             gec=d[i][i];
             d[i][i]=d[i][n-1-i];
            d[i][n-1-i]=gec;
     }

     printf("\n\nGuncel matris(Kosegenleri degisti):\n");
     for(i=0;i<n;i++)
     {
         for(j=0;j<n;j++)
            printf("%d ",d[i][j]);
         printf("\n");
     }
    return 0;
}
