#include <iostream>
#include <queue>
#include <stack>
#include <cmath> 

using namespace std;


void interleaveQueue(queue<int>& q) {
    if (q.empty() || q.size() % 2 != 0) {
       
    }

    int n = q.size();
    int half_size = n / 2;
    stack<int> s;

  
    for (int i = 0; i < half_size; ++i) {
        s.push(q.front());
        q.pop();
    }

  
    while (!s.empty()) {
        q.push(s.top());
        s.pop();
    }

   
    for (int i = 0; i < half_size; ++i) {
        q.push(q.front());
        q.pop();
    }
    
   
    for (int i = 0; i < half_size; ++i) {
        s.push(q.front());
        q.pop();
    }
    
   
    while (!s.empty()) {
       
        q.push(s.top());
        s.pop();

       
        if (!q.empty()) {
            q.push(q.front());
            q.pop();
        }
    }
}


int main() {
    queue<int> q;
   
    q.push(4); q.push(7); q.push(11); 
    q.push(20); q.push(5); q.push(9); 

    cout << "Original Queue: ";
   
    interleaveQueue(q); 
    
    cout << "Interleaved Queue: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
   
    cout << endl;
    return 0;
}
*/
