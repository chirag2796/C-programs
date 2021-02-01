#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int * dec2bin_gen(long a);
int * dec2hex_gen(long a);
int * dec2oct_gen(long a);
int * binary_addition_gen(int bn1[32], int bn2[32]);
double add_decimal_gen(double a, double b);
double subtract_decimal_gen(double a, double b);
double multiply_decimal_gen(double a, double b);
double divide_decimal_gen(double a, double b);


int main()
{
    int c;
    printf("Digital v1.3        (c)Chirag Gupta\n\n");
    printf("Enter:\n1 for Decimal to Binary\n2 for Decimal to Octal\n3 for Decimal to Hexadecimal\n");
    printf("\n4 for Binary to Decimal\n5 for Binary to Octal\n6 for Binary to Hexadecimal\n");
    printf("\n7 for Octal to Decimal\n8 for Octal to Binary\n9 for Octal to Hexadecimal\n");
    printf("\n10 for Hexadecimal to Decimal\n11 for Hexadecimal to Binary\n12 for Hexadecimal to Octal\n");
    printf("\n13 for Ones's Complement\n14 for Two's Complement\n");
    printf("\n15 for Arithmetic\n\n");

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
    if(c==8){
       oct2bin();
    }
    if(c==9){
       oct2hex();
    }
    if(c==10){
       hex2dec();
    }
    if(c==11){
       hex2bin();
    }
    if(c==12){
       hex2oct();
    }
     if(c==13){
       ones_complement();
    }
    if(c==14){
       two_complement();
    }
    if(c==15){
      main1();
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

void oct2bin(){
    long a,b;
    int i;
    int *c;
printf("\nEnter the Octal Value\n");
scanf("%ld", &a);
b=oct2dec_gen(a);
c=dec2bin_gen(b);
for(i=0;i<=31;i++)
    {
        printf("%d",*(c+i));
    }
}

void oct2hex(){
long a,b;
    int i;
    int *c;
printf("\nEnter the Octal Value\n");
scanf("%ld", &a);
b=oct2dec_gen(a);
c=dec2hex_gen(b);

for(i=0;i<=31;i++)
    {
        printf("%c",*(c+i));
    }
}

void hex2dec(){
getchar();
int a=20,b,i,j;
int h1[64], h2[32];
long d;
printf("\nEnter the HexaDecimal Value starting from LSB\nEnter X to terminate\n");
for(i=0;i<=63;i++){
        h1[i]=0;
}
for(i=0;i<=31;i++){
        h2[i]=0;
}
for(i=0;i<=63;i++){
scanf("%c", &a);
if(a==10){
    continue;
}
else if(a==88||a==120){
    break;
   // b=(i-1)/2;
}
else if((a>=48&&a<=57)||(a>=65&&a<=70)||(a>=97&&a<=102))
    {
        h1[i]=a;
    }
else{
        //printf("a is %d ",a);
    err_hex1();
}

}

for(i=0;i<=63;i+=2){
        h2[(i/2)]=h1[i];
   }


d=hex2dec_gen(h2);
printf("%ld\n",d);
getch();
getchar();
main();

}

void hex2bin(){
getchar();
int a=20,b,i,j;
int h1[64], h2[32];
long d;
printf("\nEnter the HexaDecimal Value starting from LSB\nEnter X to terminate\n");
for(i=0;i<=63;i++){
        h1[i]=0;
}
for(i=0;i<=31;i++){
        h2[i]=0;
}
for(i=0;i<=63;i++){
scanf("%c", &a);
if(a==10){
    continue;
}
else if(a==88||a==120){
    break;
   // b=(i-1)/2;
}
else if((a>=48&&a<=57)||(a>=65&&a<=70)||(a>=97&&a<=102))
    {
        h1[i]=a;
    }
else{
        //printf("a is %d ",a);
    err_hex1();
}

}

for(i=0;i<=63;i+=2){
        h2[(i/2)]=h1[i];
   }
d=hex2dec_gen(h2);

int *c;
c=dec2bin_gen(d);

for(i=0;i<=31;i++)
    {
        printf("%d",*(c+i));
    }

getch();
getchar();
main();

}

void hex2oct(){
getchar();
int a=20,b,i,j;
int h1[64], h2[32];
long d;
printf("\nEnter the HexaDecimal Value starting from LSB\nEnter X to terminate\n");
for(i=0;i<=63;i++){
        h1[i]=0;
}
for(i=0;i<=31;i++){
        h2[i]=0;
}
for(i=0;i<=63;i++){
scanf("%c", &a);
if(a==10){
    continue;
}
else if(a==88||a==120){
    break;
   // b=(i-1)/2;
}
else if((a>=48&&a<=57)||(a>=65&&a<=70)||(a>=97&&a<=102))
    {
        h1[i]=a;
    }
else{
        //printf("a is %d ",a);
    err_hex1();
}

}

for(i=0;i<=63;i+=2){
        h2[(i/2)]=h1[i];
   }
d=hex2dec_gen(h2);
 int *c;
 c=dec2oct_gen(d);
 for(i=0;i<=31;i++)
    {
        printf("%d",*(c+i));
    }
}

int * dec2bin_gen(long a){
static int bg[32];
int i;

    for(i=31;i>=0;i--)
        {
            bg[i]=a%2;
            a=a/2;
        }

    return bg;

}

int * dec2oct_gen(long a){
static int bg[32];
int i;

for(i=31;i>=0;i--){
bg[i]=0;
}

    for(i=31;i>=0;i--)
        {
            bg[i]=a%8;
            a=a/8;
        }
    return bg;

}

int * dec2hex_gen(long a){
static int bg[32];
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
    return bg;
}

int bin2dec_gen(long a, int e, int bg[32]){

 if(e==1){
long div=1000000000,d=0;
int i;

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

    return(d);

}

if(e==2){

    int i;
    long d=0;


 for(i=0;i<=31;i++){
        d+=(bg[i]*pow(2,i));
    }

    printf("%ld",d);
    return(d);
}

}

int oct2dec_gen(long a){

long div=1000000000,d=0;
int i;

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
return(d);
}

int hex2dec_gen(int *c){
int i;
long d=0;
for(i=0;i<=31;i++){
    if(*(c+i)>=48&&*(c+i)<=57){
        *(c+i)-=48;
    }
    else if(*(c+i)>=65&&*(c+i)<=70){
        *(c+i)-=55;
    }
    else if(*(c+i)>=97&&*(c+i)<=102){
        *(c+i)-=87;
    }
    }

    for(i=0;i<=31;i++){
        d+=(*(c+i)*pow(16,i));
    }
return d;
}

void ones_complement(){
printf("\nEnter:\n1 for upto 10 bits\n2 for more than 10 bits\n");
    int e;
    scanf("%d",&e);
    if(e==1){
long a,div=1000000000;
int i,f,g=0;
printf("\nEnter the Binary Value\n");
scanf("%ld", &a);

    int b1[10];
    int b2[10];

    for(i=9;i>=0;i--)
        {

           if(a/(div)==0){
            b1[i]=0;
           }
           else if(a/(div)==1){
                if(g==0){
                f=i;
                g++;
                }
                b1[i]=1;
                a=a-(div);
           }
           else{
            err_bin1();
           }
            div/=10;

        }

    for(i=0;i<=9;i++){
        if(b1[i]==0){
            b2[i]=1;
        }
        if(b1[i]==1){
            b2[i]=0;
        }
    }

    for(i=f;i>=0;i--){
        printf("%d",b2[i]);
    }

}

if(e==2){
    printf("\nEnter each bit starting from MSB and press Enter after each bit\nTo terminate Enter 2\n");
    int b1[32];
    int b2[32];
    int i,a;
    for(i=0;i<=31;i++){
        scanf("%d",&a);
        if(a==2){
            a=i-1;
            break;
        }
        else if(a==0||a==1){
            b1[i]=a;
        }
        else{
            err_bin1();
        }
    }
 for(i=0;i<=a;i++){
        if(b1[i]==0){
            b2[i]=1;
        }
        if(b1[i]==1){
            b2[i]=0;
        }
    }

    for(i=0;i<=a;i++){
        printf("%d",b2[i]);
    }
}
}

void add_decimal(){
double a,b,d;
printf("Enter the First Decimal Number\n");
scanf("%lf",&a);
printf("Enter the Second Decimal Number\n");
scanf("%lf",&b);

d = add_decimal_gen(a,b);
printf("%lf",d);
}

void subtract_decimal(){
double a,b,d;
printf("Enter the First Decimal Number\n");
scanf("%lf",&a);
printf("Enter the Second Decimal Number\n");
scanf("%lf",&b);

d = subtract_decimal_gen(a,b);
printf("%lf",d);
}

void multiply_decimal(){
double a,b,d;
printf("Enter the First Decimal Number\n");
scanf("%lf",&a);
printf("Enter the Second Decimal Number\n");
scanf("%lf",&b);

d = multiply_decimal_gen(a,b);
printf("%lf",d);
}

void divide_decimal(){
double a,b,d;
printf("Enter the First Decimal Number\n");
scanf("%lf",&a);
printf("Enter the Second Decimal Number\n");
scanf("%lf",&b);

d = divide_decimal_gen(a,b);
printf("%lf",d);
}

void add_binary(){
int bn1[32], bn2[32];
int i,a;
int *c;
for(i=0;i<=31;i++){
    bn1[i]=0;
    bn2[i]=0;
}
printf("\nEnter each bit of First Binary Number starting from LSB and press Enter after each bit\nTo terminate Enter 2\n");
for(i=0;i<=31;i++){
        scanf("%d",&a);
        if(a==2){
            a=i-1;
            break;
        }
        else if(a==0||a==1){
            bn1[i]=a;
        }
        else{
            err_bin1();
        }
    }

printf("\nEnter each bit of Second Binary Number starting from LSB and press Enter after each bit\nTo terminate Enter 2\n");
for(i=0;i<=31;i++){
        scanf("%d",&a);
        if(a==2){
            a=i-1;
            break;
        }
        else if(a==0||a==1){
            bn2[i]=a;
        }
        else{
            err_bin1();
        }
    }

    c=binary_addition_gen(bn1, bn2);


    for(i=31;i>=0;i--){
        printf("%d",*(c+i));
    }

}

double add_decimal_gen(double a, double b){
double e;
e=a+b;
return e;
}

double subtract_decimal_gen(double a, double b){
double e;
e=a-b;
return e;
}

double multiply_decimal_gen(double a, double b){
double e;
e=a*b;
return e;
}

double divide_decimal_gen(double a, double b){
double e;
e=a/b;
return e;
}

int * binary_addition_gen(int *c1, int *c2){
static int bnr[32];
int carry=0,i;

for(i=0;i<=31;i++){
if(carry==0){
  if(*(c1+i)==0&&*(c2+i)==0){
   bnr[i]=0;
   carry=0;
  }
  if((*(c1+i)==1&&*(c2+i)==0)||(*(c1+i)==0&&*(c2+i)==1)){
   bnr[i]=1;
   carry=0;
  }
  if(*(c1+i)==1&&*(c2+i)==1){
   bnr[i]=0;
   carry=1;
  }
}
else if(carry==1){
  if(*(c1+i)==0&&*(c2+i)==0){
   bnr[i]=1;
   carry=0;
  }
  if((*(c1+i)==1&&*(c2+i)==0)||(*(c1+i)==0&&*(c2+i)==1)){
   bnr[i]=0;
   carry=1;
  }
  if(*(c1+i)==1&&*(c2+i)==1){
   bnr[i]=1;
   carry=1;
  }
}
}
return bnr;
}

void two_complement(){
printf("\nEnter each bit starting from LSB and press Enter after each bit\nTo terminate Enter 2\n");
    int b1[32];
    int b2[32];
    int i,a;
    for(i=0;i<=31;i++){
            b2[i]=0;
    }
    for(i=0;i<=31;i++){
        scanf("%d",&a);
        if(a==2){
            a=i-1;
            break;
        }
        else if(a==0||a==1){
            b1[i]=a;
        }
        else{
            err_bin1();
        }
    }
 for(i=0;i<=a;i++){
        if(b1[i]==0){
            b2[i]=1;
        }
        if(b1[i]==1){
            b2[i]=0;
        }
    }

 for(i=0;i<=31;i++){
    if(b2[i]==0){
        b2[i]=1;
        break;
    }
    else if(b2[i]==1){
        b2[i]=0;
    }
    }
    for(i=31;i>=0;i--){
        printf("%d",b2[i]);
    }
}

void main1(){
printf("Enter\n");
printf("1 for Decimal Addition\n2 for Decimal Subtraction\n3 for Decimal Multiplication\n4 for Decimal Division\n\n");
printf("5 for Binary Addition\n6 for Binary Subtraction\n7 for Binary Multiplication\n8 for Binary Division\n\n");
printf("9 for Octal Addition\n10 for Octal Subtraction\n11 for Octal Multiplication\n12 for Octal Division\n\n");
printf("13 for Hexadecimal Addition\n14 for Hexadecimal Subtraction\n15 for Hexadecimal Multiplication\n16 for Hexadecimal Division\n\n");

int c;
scanf("%d", &c);

if(c==1){
    add_decimal();
}
if(c==2){
    subtract_decimal();
}
if(c==3){
    multiply_decimal();
}
if(c==4){
    divide_decimal();
}
if(c==5){
    add_binary();
}
//if(c==6){
//    subtract_binary();
//}
//if(c==7){
//    multiply_binary();
//}
//if(c==8){
//    divide_binary();
//}
//if(c==9){
//    add_octal();
//}
//if(c==10){
//    subrtact_octal();
//}
//if(c==11){
//    multiply_octal();
//}
//if(c==12){
//    divide_octal();
//}
//if(c==13){
//    add_hex();
//}
//if(c==14){
//    subtract_hex();
//}
//if(c==15){
//    multiply_hex();
//}
//if(c==16){
//    divide_hex)();
//}
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

void err_hex1(){
printf("\nError\nHexadecimal can have numbers between 0 and 9 or characters between A and F only\nPress Enter to Continue\n");
getch();
main();
}
