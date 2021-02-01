#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100];
    int k=0;
    int i,j;

for(i=0;i<100;i++){
    a[i]=1;
}

for(j=1;j<=6;j++){
for(i=1;i<100;i+=2){
       if(a[i]!=0){
       a[i]=0;

       }
       else{
        i++;
       }
    }
}

    for(i=0;i<100;i++){
        if(a[i]==0){
            break;
        }
    }
    printf("\n%d",i+1);
}

