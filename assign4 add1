#include <iostream>
#include <queue>
#include <string>

using namespace std;


void generateBinaryNumbers(int n) {
    if (n <= 0) return;

    
    queue<string> q;

   
    q.push("1");

    
    for (int i = 0; i < n; i++) {
        
        string current = q.front();
        q.pop();
        cout << current << " ";

        
        string s0 = current + "0";
        q.push(s0);

        
        string s1 = current + "1";
        q.push(s1);
    }
    cout << endl;
}

// Example Usage:

int main() {
    int n = 10;
    cout << "Binary numbers up to " << n << ": ";
    generateBinaryNumbers(n);
  
    return 0;
}
