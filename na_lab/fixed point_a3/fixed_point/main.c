#include<stdio.h>
#include<math.h>
#define ESP 0.0001
#define F(x) 2*sin(3.142*x)+x
#define X(x) atanf(4*x)
#define G(x) 4/(1+(16*x*x))


void main()
{
  float x1,x2,x;
  int i=1;
  do
  {
  printf("\nEnter the value of x: ");
  scanf("%f",&x);
  }while(fabs(G(x)) > 1);
  x1=X(x);
  printf("\n x = %f",x1);
  printf("\n\n");
  do
  {
   x2=X(x1);
   if(fabs(x1-x2)<ESP)
   {
    printf("\n\nREAL ROOT = %f",x1);
    i=0;
   }
   else
   {
    x1=x2;
   }
  if(i==1)
  {
   printf("\n x = %f",x1);
   printf("\n\n");
  }
  }while(i!=0);
getch();
}
