#include <iostream>
#include <queue>
#include <stack>
#include <algorithm>

using namespace std;


void sortQueueWithStack(queue<int>& q) {
    int n = q.size();
    stack<int> s;

    
    for (int i = 1; i <= n; i++) {
        int min_val = INT_MAX;
        
       
        int current_unsorted_size = n - i + 1;
        
        
        for (int j = 0; j < current_unsorted_size; j++) {
            int current = q.front();
            q.pop();
            
           
            if (current < min_val) {
                min_val = current;
            }
            s.push(current);
        }

        
        while (!s.empty()) {
            if (s.top() != min_val) {
                q.push(s.top());
            }
            s.pop();
        }

        
        q.push(min_val);
        
        
    }
}


int main() {
    queue<int> q;
    
    q.push(15); q.push(1); q.push(2); q.push(3); q.push(4); 
    
    sortQueueWithStack(q);
    
    cout << "Sorted Queue (using stack): ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
  
    cout << endl;
    return 0;
}
