
#include <stdio.h>

void display(int *);
int main()
{
int i;
int marks[]={1,2,3,4,5,6,7};
for(i=0;i<=6;i++){
    disp(&marks[i]);
}
}

void disp(int *n){
show(&n);
}

void show(int *x){
printf("%d ",*x);
}
