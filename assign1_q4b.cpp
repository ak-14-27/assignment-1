#include <iostream>
using namespace std;

int main() {
int x,y,z;
cout<<"Enter rows of Matrix1: ";
cin>>x;
cout<<"Enter columns of Matrix1: ";
cin>>y;
int arr[x][y];
cout<<"Enter Matrix 1 elements: ";
for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
        cin>>arr[i][j];
    }
}
cout<<"Enter columns of Matrix2: ";
cin>>z;
int brr[y][z];
cout<<"Enter Matrix2: ";
for(int i=0;i<y;i++){
    for(int j=0;j<z;j++){
        cin>>brr[i][j];
    }
}
int crr[x][z];
int rc=y;
for(int i=0;i<x;i++){
    for(int j=0;j<z;j++){
         crr[i][j]={0};
        for(int k=0;k<rc;k++){
            crr[i][j]+=arr[i][k]*brr[k][j];
        }
    }
}
for(int i=0;i<x;i++){
    for(int j=0;j<z;j++){
        cout<<crr[i][j]<<" ";
    }
    cout<<"\n";
}

    return 0;
}
