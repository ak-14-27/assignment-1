#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n]={0};
    cout<<"Enter array elements: ";
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    int sum=(n*(n+1))/2;
    int asum=0;
    for(int i=0;i<n;i++){
        asum=asum+arr[i];
    }
    int missing=sum-asum;
    cout<<"Missing Element is "<<missing;
    return 0;
}
