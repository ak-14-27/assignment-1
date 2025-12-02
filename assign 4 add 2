#include <iostream>
#include <queue>
#include <algorithm> // For std::min

using namespace std;


int getMinIndex(queue<int>& q, int sort_length) {
    int min_val = INT_MAX;
    int min_idx = -1;
    int n = q.size();

  
    for (int i = 0; i < n; i++) {
        int current = q.front();
        q.pop();

       
        if (i >= (n - sort_length) && current < min_val) {
            min_val = current;
            min_idx = i;
        }
        q.push(current);
    }
    return min_idx;
}


void moveMinToRear(queue<int>& q, int min_index) {
    int n = q.size();
    
    for (int i = 0; i < min_index; i++) {
        q.push(q.front());
        q.pop();
    }
    
   
    int min_val = q.front();
    q.pop();
    q.push(min_val); 
    
    
    for (int i = 0; i < n - min_index - 1; i++) {
        q.push(q.front());
        q.pop();
    }
}


void sortQueueWithoutExtraSpace(queue<int>& q) {
    int n = q.size();

   
    for (int i = 1; i <= n; i++) {
        
        int min_index = getMinIndex(q, n - i + 1);

        
        moveMinToRear(q, min_index);
    }
}


int main() {
    queue<int> q;
    
    q.push(4); q.push(5); q.push(11); q.push(21);

   q.push(11); q.push(5); q.push(4); q.push(21);
    
    sortQueueWithoutExtraSpace(q);
    
    cout << "Sorted Queue: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
   
    cout << endl;
    return 0;
}
