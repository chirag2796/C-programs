#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define f(x) (exp(-1*x)*((x*x)+(5*x)+2))+1
#define g(x) exp(-1*x)*((-1*x*x)-(3*x)+3)

#define tol 0.00001

int main(){
float a,b,c,f1,g1;
scanf("%f",&a);
//scanf("%f",&b);
do{
    if(g(a)==0){
            printf("error");
        break;
    }
f1=f(a);
g1=g(a);
b=a-(f1/g1);
c=f(b);
a=b;
}
while(c>tol);
printf("%f",b);
main();
}
