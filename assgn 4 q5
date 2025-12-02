#include <queue>
#include <iostream>

using namespace std;

class StackTwoQueues {
private:
    queue<int> q1;
    queue<int> q2; 

public:
   
    void push(int x) {
        q1.push(x);
    }

   
    int pop() {
        if (q1.empty()) {
            throw out_of_range("Stack is empty");
        }
        
        
        while (q1.size() > 1) {
            q2.push(q1.front());
            q1.pop();
        }
        
        
        int top_element = q1.front();
        q1.pop(); // Remove it

       
        q1.swap(q2); 

        return top_element;
    }

    bool empty() const {
        return q1.empty();
    }
    
   
    int top() {
        if (q1.empty()) {
            throw out_of_range("Stack is empty");
        }
        
        
        while (q1.size() > 1) {
            q2.push(q1.front());
            q1.pop();
        }
        
        int top_element = q1.front();
        
       
        q2.push(q1.front());
        q1.pop();

        
        q1.swap(q2); 

        return top_element;
    }
};
