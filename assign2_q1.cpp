#include<iostream>
using namespace std;
int main(){
    int x;
    int mid=0;
    cout<<"Enter size of array: ";
    cin>>x;
    int arr[x];
    cout<<"Enter array elements: ";
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the element to be searched: ";
    cin>>key;
    int low=0;
    int high=x-1;
    while(low<=high){
         mid=(low+high)/2;
         if(mid==key){
             cout<<"Found at position "<<mid;
             break;
         }
         else if(key<mid){
             high=mid-1;
         }
         else if(key>mid){
             low=mid+1;
         }
    }
    
    return 0;
}
