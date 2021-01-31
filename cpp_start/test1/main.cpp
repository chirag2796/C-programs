#include <iostream>
using namespace std;

class mat{

private:
    float matrix[10][10];
    int m,n;
 //   static int q;

public:
    void start();
    void matrix_mul(mat, mat);
    void show(mat, mat);
};

//int mat ::q=0;

void mat::start(){
int i,j;
cout<<"\nEnter the order of mxn matrix\n";
cin>>m>>n;
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        cout<<"Row:"<<i+1<<" Column:"<<j+1<<" ";
        cin>>matrix[i][j];
    }
}
}

void mat::matrix_mul(mat a4, mat a5){
    int i,j;
//    q=a5.m;
   // float final_mat[a5.m-1];
    for(i=0;i<a5.m;i++){
        for(j=0;j<a4.n;j++){
            matrix[i][j]+=a4.matrix[i][j]*a5.matrix[j][i];
        }
    }

}

void mat::show(mat a1, mat a2){

int i,j;
for(i=0;i<a1.m;i++){
        for(j=0;j<a2.n;i++){
        cout<<endl<<matrix[i]<<endl;
}
}
}

int main(){

mat a1,a2,a3;
a1.start();
a2.start();
a3.matrix_mul(a1, a2);
a3.show(a1, a2);
}
