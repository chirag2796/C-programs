#include<stdio.h>
#include<conio.h>
#include<math.h>
#define F(x) cos(x)+sin(x)
#define G(x) cos(x)-sin(x)
void main()
{
  float x[10],y[10],temp=1,f[10],sum,p;
  int i,n,j,k=0,c;
  printf("\nEnter the degree of polynomial");
  scanf("%d",&n);
  for(i=0; i<n; i++)
  {
   printf("\n\nenter the value of x%d: ",i);
   scanf("%f",&x[i]);
   y[i]=F(x[i]);
  }
  printf("\n\nEnter X for finding f(x): ");
  scanf("%f",&p);

  for(i=0;i<n;i++)
  {
    temp = 1;
    k = i;
    for(j=0;j<n;j++)
    {
      if(k==j)
      {
        continue;
      }
      else
      {
        temp = temp * ((p-x[j])/(x[k]-x[j]));
      }
    }
    f[i]=y[i]*temp;
  }

  for(i=0;i<n;i++)
  {
     sum = sum + f[i];
  }

  float a=1,b=1,d=fabs(G(x[0])),e,h;
  for(i=0;i<n;i++){
    a*=fabs((p-x[i]));
    b*=(i+1);
  }
  for(h=x[0];h<=x[n-1];h+=0.001){
    if(fabs(G(h))>d){
        d=fabs(G(h));
    }
  }

  e=(a*d)/b;

  printf("\n\n f(%f) = %f ",p,sum);
  printf("\n\n error bound = %f ",e);
  getch();
}
