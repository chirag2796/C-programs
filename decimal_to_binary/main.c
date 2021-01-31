#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int c;
    printf("Enter:\n1 for Decimal to Binary\n2 for Decimal to Octal\n3 for Decimal to Hexadecimal\n");
    printf("Enter:\n4 for Binary to Decimal\n5 for Binary to Octal\n6 for Binary to Hexadecimal\n");
    scanf("%d", &c);
    if(c==1){
        dec2bin();
    }
    if(c==2){
        dec2oct();
    }
    if(c==3){
        dec2hex();
    }
    if(c==4){
        bin2dec();
    }
    if(c==5){
       // bin2oct();
    }
    if(c==6){
       // bin2hex();
    }

getch();
}

void dec2bin(){
int a,i;
printf("Enter the Decimal Value\n");
scanf("%d", &a);

    int b[32];


    for(i=31;i>=0;i--)
        {
            b[i]=a%2;
            a=a/2;
        }

    for(i=0;i<=31;i++)
    {
        printf("%d",b[i]);
    }

}

void dec2oct(){
int a,i;
printf("Enter the Decimal Value\n");
scanf("%d", &a);

    int b[8];


    for(i=7;i>=0;i--)
        {
            b[i]=a%8;
            a=a/8;
        }
    for(i=0;i<=7;i++)
    {
        printf("%d",b[i]);
    }

}

void dec2hex(){
int a,i,h1;
printf("Enter the Decimal Value\n");
scanf("%d", &a);

    int b[8];


    for(i=7;i>=0;i--)
        {
            h1=a%16;
            if(h1<=9){
                b[i]=h1+48;
            }
            else{
                b[i]=h1+55;
            }

            a=a/16;
        }
    for(i=0;i<=7;i++)
    {
        printf("%c",b[i]);
    }

}

void bin2dec(){
long a,div=10000000,d=0;
int i;
printf("Enter the Binary Value\n");
scanf("%d", &a);

    long b[8];


    for(i=7;i>=0;i--)
        {

           if(a/(div)==0){
            b[i]=0;
           }
           else{
                b[i]=1;
                a=a-(div);
           }
            div/=10;

        }

    for(i=0;i<=7;i++){
        d+=(b[i]*pow(2,i));
    }

    printf("%d",d);

}
