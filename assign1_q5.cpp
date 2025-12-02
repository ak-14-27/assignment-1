#include <iostream>
using namespace std;

int main() {
int x,y;
cout<<"Enter rows of Matrix: ";
cin>>x;
cout<<"Enter columns of Matrix: ";
cin>>y;
int arr[x][y];
cout<<"Enter Matrix  elements: ";
for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
        cin>>arr[i][j];
    }
}
for(int i=0;i<x;i++){
    int rsum=0;
    for(int j=0;j<y;j++){
        rsum=rsum+arr[i][j];
      
    }
      cout<<"Sum of row "<<i+1<<" is "<<rsum<<"\n";
}
for(int i=0;i<y;i++){
    int csum=0;
    for(int j=0;j<x;j++){
        csum=csum+arr[j][i];
    }
    cout<<"Sum of column "<<i+1<<" is "<<csum<<"\n";
}
    return 0;
}
