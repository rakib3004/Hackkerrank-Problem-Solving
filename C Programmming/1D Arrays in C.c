
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,sum=0;

     scanf("%d",&n);


     int a[n];


     int i;


     for(i=0;i<n;i++)
     {


         scanf("%d",&a[i]);
         sum+=a[i];
     }

      printf("%d",sum);


    return 0;
}

