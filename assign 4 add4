#include <iostream>
#include <vector>
#include <stack>
#include <numeric>

using namespace std;


int countStudentsUnableToEat(const vector<int>& students, const vector<int>& sandwiches) {
   
    int count_0 = 0; 
    int count_1 = 0;

    for (int pref : students) {
        if (pref == 0) {
            count_0++;
        } else {
            count_1++;
        }
    }

   
    
   
    for (int sandwich_type : sandwiches) {
        if (sandwich_type == 0) { // Square sandwich
            if (count_0 > 0) {
               
                count_0--;
            } else {
               
                break;
            }
        } else { 
            if (count_1 > 0) {
                
                count_1--;
            } else {
                
                break;
            }
        }
    }

   
    return count_0 + count_1;
}


int main() {
  
    vector<int> students = {1, 1, 0, 0};
    vector<int> sandwiches = {0, 1, 0, 1}; 
    
    int result = countStudentsUnableToEat(students, sandwiches);
    cout << "Number of Students Unable to Eat: " << result << endl; 

   
    vector<int> students2 = {1, 1, 1, 0, 0, 1}; 
    vector<int> sandwiches2 = {1, 0, 0, 0, 1, 1}; 
    
    int result2 = countStudentsUnableToEat(students2, sandwiches2);
    cout << "Number of Students Unable to Eat: " << result2 << endl; 
   
   
    return 0;
}
