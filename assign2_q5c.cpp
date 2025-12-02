#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of lower triangular matrix: ";
    cin >> n;

    int size = n * (n + 1) / 2;
    int lower[size];

    cout << "Enter " << size << " non-zero elements: ";
    for (int i = 0; i < size; i++)
        cin >> lower[i];

    cout << "Stored Lower Triangular elements: ";
    for (int i = 0; i < size; i++)
        cout << lower[i] << " ";
    return 0;
}
