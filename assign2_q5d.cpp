#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of upper triangular matrix: ";
    cin >> n;

    int size = n * (n + 1) / 2;
    int upper[size];

    cout << "Enter " << size << " non-zero elements: ";
    for (int i = 0; i < size; i++)
        cin >> upper[i];

    cout << "Stored Upper Triangular elements: ";
    for (int i = 0; i < size; i++)
        cout << upper[i] << " ";
    return 0;
}
