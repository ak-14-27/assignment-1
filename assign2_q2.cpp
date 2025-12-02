#include<iostream>
using namespace std;
int main(){
    bool flag=false;
   int x;
   cout<<"Enter size of array: ";
   cin>>x;
   int arr[x];
   cout<<"Enter array elements: ";
   for(int i=0;i<x;i++){
       cin>>arr[i];
   }
   int temp=0;
   for(int i=0;i<x-1;i++){
       for(int j=0;j<=x-2;j++){
           if(arr[j]>arr[j+1]){
               temp=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=temp;
               flag=true;
           }
       }
       if(flag==false){
           break;
       }
   }
   for(int i=0;i<x;i++){
       cout<<arr[i]<<" ";
   }
    return 0;
}
