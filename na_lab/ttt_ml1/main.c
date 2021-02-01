#include <stdio.h>
#include <stdlib.h>



int main()
{
    int mat[9];
    int done[9];
    int i,j,a,b,random,turn=0;

    for(i=0;i<=8;i++){
            mat[i]=0;
        }

        a=enter();
        done[0]=a;
        mat[a-1]=1;
        turn=0;
        if(check()){
            printf("\n",you win);
        }
        random=(rand() % 9) + 1;
        printf("\n\n%d", random);
        mat[random]=1;
        if(check()){
            printf("\n",I win);
        }
}

void enter(){

    int a;
    scanf("%d", &a);
    return a;

}

bool check(){

if((mat[0]==1 && mat[1] == 1 && mat[2]==1) || (mat[3]==1 && mat[4] == 1 && mat[5]==1) || (mat[6]==1 && mat[7] == 1 && mat[8]==1) || (mat[0]==1 && mat[3] == 1 && mat[6]==1) || (mat[1]==1 && mat[4] == 1 && mat[7]==1) || (mat[2]==1 && mat[5] == 1 && mat[8]==1) || (mat[0]==1 && mat[4] == 1 && mat[8]==1) || (mat[2]==1 && mat[4] == 1 && mat[6]==1)){

    return true;

}

else{
    return false;
}

}
