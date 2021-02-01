#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int c;
    printf("Digital v1.0        (c)Chirag Gupta\n\n");
    printf("Enter:\n1 for Decimal to Binary\n2 for Decimal to Octal\n3 for Decimal to Hexadecimal\n");
    printf("\n4 for Binary to Decimal\n5 for Binary to Octal\n6 for Binary to Hexadecimal\n");
    printf("\n7 for Octal to Decimal\n8 for Octal to Binary\n9 for Octal to Hexadecimal\n\n");
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
        bin2oct();
    }
    if(c==6){
       bin2hex();
    }
    if(c==7){
       oct2dec();
    }

getch();
printf("\n\n");
main();
}

void dec2bin(){
int a,i;
printf("\nEnter the Decimal Value\n");
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
printf("\nEnter the Decimal Value\n");
scanf("%d", &a);

    int b[32];


    for(i=31;i>=0;i--)
        {
            b[i]=a%8;
            a=a/8;
        }
    for(i=0;i<=31;i++)
    {
        printf("%d",b[i]);
    }

}

void dec2hex(){
int a,i,h1;
printf("\nEnter the Decimal Value\n");
scanf("%d", &a);

    int b[32];


    for(i=31;i>=0;i--)
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
    for(i=0;i<=31;i++)
    {
        printf("%c",b[i]);
    }

}

void bin2dec(){
    printf("\nEnter:\n1 for upto 10 bits\n2 for more than 10 bits\n");
    int e;
    scanf("%d",&e);
    if(e==1){
long a,div=1000000000,d=0;
int i;
printf("\nEnter the Binary Value\n");
scanf("%ld", &a);

    long b[10];

    for(i=9;i>=0;i--)
        {

           if(a/(div)==0){
            b[i]=0;
           }
           else if(a/(div)==1){
                b[i]=1;
                a=a-(div);
           }
           else{
            err_bin1();
           }
            div/=10;

        }

    for(i=0;i<=9;i++){
        d+=(b[i]*pow(2,i));
    }

    printf("%ld",d);

}

if(e==2){
    printf("\nEnter each bit starting from LSB and press Enter after each bit\nTo terminate Enter 2\n");
    int b[32];
    int i,a;
    long d=0;
    for(i=0;i<=31;i++){
        scanf("%d",&a);
        if(a==2){
            a=i-1;
            break;
        }
        else if(a==0||a==1){
            b[i]=a;
        }
        else{
            err_bin1();
        }
    }
 for(i=0;i<=a;i++){
        d+=(b[i]*pow(2,i));
    }

    printf("%ld",d);
}
}

void bin2oct(){


printf("\nEnter:\n1 for upto 10 bits\n2 for more than 10 bits\n");
    int e;
    scanf("%d",&e);
    if(e==1){
long a,div=1000000000,d=0;
int i;
printf("\nEnter the Binary Value\n");
scanf("%ld", &a);

    long b[10];

    for(i=9;i>=0;i--)
        {

           if(a/(div)==0){
            b[i]=0;
           }
          else if(a/(div)==1){
                b[i]=1;
                a=a-(div);
           }
           else{
            err_bin1();
           }
            div/=10;

        }

    for(i=0;i<=9;i++){
        d+=(b[i]*pow(2,i));
    }

    int c[10];


    for(i=9;i>=0;i--)
        {
            b[i]=d%8;
            d=d/8;
        }
    for(i=0;i<=9;i++)
    {
        printf("%d",b[i]);
    }

}

if(e==2){
    printf("\nEnter each bit starting from LSB and press Enter after each bit\nTo terminate Enter 2\n");
    int b[32];
    int i,a;
    long d=0;
    for(i=0;i<=31;i++){
        scanf("%d",&a);
        if(a==2){
            a=i-1;
            break;
        }
        else if(a==0||a==1){
            b[i]=a;
        }
        else{
            err_bin1();
        }
    }
 for(i=0;i<=a;i++){
        d+=(b[i]*pow(2,i));
    }

    for(i=31;i>=0;i--)
        {
            b[i]=d%8;
            d=d/8;
        }
    for(i=0;i<=31;i++)
    {
        printf("%d",b[i]);
    }

}
}

void bin2hex(){
    printf("\nEnter:\n1 for upto 10 bits\n2 for more than 10 bits\n");
    int e;
    scanf("%d",&e);
    if(e==1){
long a,div=1000000000,d=0;
int i;
printf("\nEnter the Binary Value\n");
scanf("%ld", &a);

    long b[10];

    for(i=9;i>=0;i--)
        {

           if(a/(div)==0){
            b[i]=0;
           }
           else if(a/(div)==1){
                b[i]=1;
                a=a-(div);
           }
           else{
            err_bin1();
           }
            div/=10;

        }

    for(i=0;i<=9;i++){
        d+=(b[i]*pow(2,i));
    }
    int h1;
    int b1[10];
for(i=9;i>=0;i--)
        {
            h1=d%16;
            if(h1<=9){
                b1[i]=h1+48;
            }
            else{
                b1[i]=h1+55;
            }

            d=d/16;
        }
    for(i=0;i<=9;i++)
    {
        printf("%c",b1[i]);
    }

}

if(e==2){
    printf("\nEnter each bit starting from LSB and press Enter after each bit\nTo terminate Enter 2\n");
    int b[32];
    int i,a;
    long d=0;
    for(i=0;i<=31;i++){
        scanf("%d",&a);
        if(a==2){
            a=i-1;
            break;
        }
         else if(a==0||a==1){
            b[i]=a;
        }
        else{
            err_bin1();
        }
    }
 for(i=0;i<=a;i++){
        d+=(b[i]*pow(2,i));
    }
    int h1;
    for(i=31;i>=0;i--)
        {
            h1=d%16;
            if(h1<=9){
                b[i]=h1+48;
            }
            else{
                b[i]=h1+55;
            }

            d=d/16;
        }
    for(i=0;i<=31;i++)
    {
        printf("%c",b[i]);
    }

}
}

void oct2dec(){

long a,div=1000000000,d=0;
int i;
printf("\nEnter the Octal Value\n");
scanf("%ld", &a);

    long b[10];

    for(i=9;i>=0;i--)
        {

           if(a/(div)==0){
            b[i]=0;
           }
           else if((a/(div))>=0&&(a/(div))<=7){
                b[i]=(a/(div));
                a=a-((a/(div))*(div));
           }
           else{
            err_oct1();
           }
            div/=10;

        }

    for(i=0;i<=9;i++){
        d+=(b[i]*pow(8,i));
    }

    printf("%ld",d);

}

int dec2bin_gen(int a){
int bg[32];
int i;

    for(i=31;i>=0;i--)
        {
            bg[i]=a%2;
            a=a/2;
        }

    return(bg);

}

int dec2oct_gen(int a){
int bg[32];
int i;

    for(i=31;i>=0;i--)
        {
            bg[i]=a%8;
            a=a/8;
        }
    return(bg);

}

int dec2hex_gen(int a){
int bg[32];
int i,h1;

    for(i=31;i>=0;i--)
        {
            h1=a%16;
            if(h1<=9){
                bg[i]=h1+48;
            }
            else{
                bg[i]=h1+55;
            }

            a=a/16;
        }
    return(bg);
}

void err_bin1(){
printf("\nError\nBinary can have only 1 or 0\nPress Enter to Continue\n");
getch();
printf("\n");
main();
}

void err_oct1(){
printf("\nError\nOctal can have numbers between 0 and 7 only\nPress Enter to Continue\n");
getch();
printf("\n");
main();
}
