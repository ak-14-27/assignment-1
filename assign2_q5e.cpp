#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of symmetric matrix: ";
    cin >> n;

    int size = n * (n + 1) / 2;
    int symmetric[size];

    cout << "Enter " << size << " elements of lower triangle: ";
    for (int i = 0; i < size; i++)
        cin >> symmetric[i];

    cout << "Stored Symmetric Matrix elements: ";
    for (int i = 0; i < size; i++)
        cout << symmetric[i] << " ";
    return 0;
}
