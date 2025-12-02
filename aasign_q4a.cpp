#include <iostream>
using namespace std;

int main() {
   int x;
   cout<<"Enter size of array: ";
   cin>>x;
   int arr[x];
   cout<<"Enter array elements: ";
   for(int i=0;i<x;i++){
       cin>>arr[i];
   }
   for(int i=0,j=x-1;i<=j;i++,j--){
       int temp=arr[i];
       arr[i]=arr[j];
       arr[j]=temp;
   }
   cout<<"The reverse array is: ";
   for(int i=0;i<x;i++){
       cout<<arr[i]<<" ";
   }
    return 0;
}
