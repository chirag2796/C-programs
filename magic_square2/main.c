#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e,f,g,h,i;
    for(a=1;a<=9;a++){
        for(b=1;b<=9;b++){
            if(b!=a){
            for(c=1;c<=9;c++){
                    if(c!=a&&c!=b){
                        if((a+b+c)==15){

                for(d=1;d<=9;d++){
                        if(d!=a&&d!=b&&d!=c){
       for(e=1;e<=9;e++){
            if(e!=a&&e!=b&&e!=c&&e!=d){
            for(f=1;f<=9;f++){
                if(f!=a&&f!=b&&f!=c&&f!=d&&f!=e){
                if((d+e+f)==15){
                  {



                   for(g=1;g<=9;g++){
                        if(g!=a&&g!=b&&g!=c&&g!=d&&g!=e&&g!=f){
       for(h=1;h<=9;h++){
            if(h!=a&&h!=b&&h!=c&&h!=d&&h!=e&&h!=f&&h!=g){
            for(i=1;i<=9;i++){
                if(i!=a&&i!=b&&i!=c&&i!=d&&i!=e&&i!=f&&i!=g&&i!=h){
                if((g+h+i)==15){
                  if((a+d+g)==15&&(b+e+h)==15&&(c+f+i)==15&&(a+e+i)==15&&(c+e+g)==15)
                    {
                      printf("[(%d,%d,%d), (%d,%d,%d), (%d,%d,%d)]\n", a,b,c,d,e,f,g,h,i);
                  }
                }
                }
            }
            }
       }
                        }
                   }


  }

            }
       }

            }
       }
                        }
          }

                        }
                    }
                    }
            }
        }
        }

        }
        }
