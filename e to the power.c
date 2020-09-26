#include<stdio.h>

int main()
{
  float x, sum=1, no=1;
  int i, n;

   printf("input the values of x ");
   scanf("%f",&x);
   printf("input the no.of terms ");
   scanf("%d",&n);
   for(i=1;i<n;i++)
   {
       no=no*x/(float)i;
       sum=sum+no;
   }
   printf("\n the sum is %f", sum);
}
