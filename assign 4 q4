#include <iostream>
#include <string>
#include <queue>
#include <vector>

using namespace std;


char findFirstNonRepeating(const string& str) {
    
    vector<int> char_counts(26, 0); 
    
    
    for (char ch : str) {
        int index = ch - 'a';
        char_counts[index]++;

       
        if (char_counts[index] == 1) {
            q.push(ch);
        }

       
        while (!q.empty() && char_counts[q.front() - 'a'] > 1) {
            q.pop();
        }
    }

  
    if (!q.empty()) {
        return q.front();
    } else {
       
        return '\0'; 
    }
}

