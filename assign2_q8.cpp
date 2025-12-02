#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);

    unordered_set<int> s(arr, arr + n);
    cout << "Total distinct elements: " << s.size();
    return 0;
}
