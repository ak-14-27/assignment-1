#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of tri-diagonal matrix: ";
    cin >> n;

    int size = 3 * n - 2;
    int tri[size];
    cout << "Enter " << size << " non-zero elements: ";
    for (int i = 0; i < size; i++)
        cin >> tri[i];

    cout << "Stored Tri-diagonal elements: ";
    for (int i = 0; i < size; i++)
        cout << tri[i] << " ";
    return 0;
}
