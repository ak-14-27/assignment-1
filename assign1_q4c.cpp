#include <iostream>
using namespace std;

int main() {
int x,y;
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
for(int i=0;i<y;i++){
    for(int j=0;j<x;j++){
        cout<<arr[j][i]<<" ";
    }
    cout<<"\n";
}
    return 0;
}
