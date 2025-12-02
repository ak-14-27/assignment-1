#include <iostream>
using namespace std;

int main() {
    int a[5][3] = {{3,3,4},{0,0,5},{1,1,7},{2,2,9},{2,0,6}};
    int b[5][3] = {{3,3,4},{0,0,3},{1,1,2},{2,2,1},{2,1,4}};
    int c[10][3];

    int i=1,j=1,k=1;
    c[0][0]=a[0][0];
    c[0][1]=a[0][1];

    while(i<=a[0][2] && j<=b[0][2]) {
        if(a[i][0]==b[j][0] && a[i][1]==b[j][1]) {
            c[k][0]=a[i][0];
            c[k][1]=a[i][1];
            c[k][2]=a[i][2]+b[j][2];
            i++; j++; k++;
        }
        else if(a[i][0]<b[j][0] || (a[i][0]==b[j][0] && a[i][1]<b[j][1])) {
            c[k][0]=a[i][0];
            c[k][1]=a[i][1];
            c[k][2]=a[i][2];
            i++; k++;
        }
        else {
            c[k][0]=b[j][0];
            c[k][1]=b[j][1];
            c[k][2]=b[j][2];
            j++; k++;
        }
    }
    while(i<=a[0][2]) { c[k][0]=a[i][0]; c[k][1]=a[i][1]; c[k][2]=a[i][2]; i++; k++; }
    while(j<=b[0][2]) { c[k][0]=b[j][0]; c[k][1]=b[j][1]; c[k][2]=b[j][2]; j++; k++; }
    c[0][2]=k-1;

    cout<<"Resultant Matrix:\n";
    for(int x=0;x<k;x++)
        cout<<c[x][0]<<" "<<c[x][1]<<" "<<c[x][2]<<endl;
    return 0;
}
