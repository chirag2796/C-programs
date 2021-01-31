#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[4] = {'a','b','c','d'};
    perm(a,0,4);
    return 0;
}

void perm(char a[4],int k, int n){
    if(k==n){
        int i;
        for(i=0;i<n;i++)
            printf("%c ",a[i]);
        printf("\n");
    }
    else{
        int i;
        for(i=k;i<n;i++){
            char temp = a[k];
            a[k] = a[i];
            a[i] = temp;

            perm(a,k+1,n);

            temp = a[k];
            a[k] = a[i];
            a[i] = temp;
        }
    }
}
