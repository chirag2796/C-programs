#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    printf("enter the number of rows/columns");
  int n0,n1,s,a,b,c;
  scanf("%d",&n0);
  s=(n0*((n0*n0)+1))/2;
  n1=(n0*n0);
  int n[n1];
  for(a=0;a<=(n1-1);a++){
    for(n[a]=1;n[a]<=n1;n[a]++){
        for(c=0;c<=(n1-1);c++){
                if(n[a]!=n[c])
                {
                    printf("n[%d]=%d ",a,n[a]);
                        break;
                }

        }

    }
  printf("\n");
  }



}
