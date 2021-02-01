#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    printf("enter the number of rows/columns");
  int n0,n1,n2,s,a,b,c;
  scanf("%d",&n0);
  s=(n0*((n0*n0)+1))/2;
  n1=(n0*n0);
  int n[n1];
  a=0;
  n2=(n1-1);
n[a]=1;
while(a<=n2){
    //for(n[a]=1;n[a]<=n1;n[a]++){
        for(c=0;c<=n2;c++){
                if(n[a]!=n[c])
                {
                    printf("n[%d]=%d ",a,n[a]);
                    n[a+1]=(n[a]+1);
                    a++;

                        break;
                }

        }
    //}
    }





}
