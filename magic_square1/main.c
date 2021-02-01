#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e,f,g,h,i;
    for(a=1;a<=9;a++){
        for(b=1;b<=9;b++){
            for(c=1;c<=9;c++){
                    if((a+b+c)==15){

                for(d=1;d<=9&&d!=a&&d!=b&&d!=c;d++){
       for(e=1;e<=9&&e!=a&&e!=b&&e!=c&&e!=d;e++){
            for(f=1;f<=9&&f!=a&&f!=b&&f!=c&&f!=d&&f!=e;f++){
                if((d+e+f)==15){
                    printf("[(%d,%d,%d),(%d,%d,%d)]",a,b,c,d,e,f);
                }

            }
       }


          }

                    }
            }
        }
    }

        }
