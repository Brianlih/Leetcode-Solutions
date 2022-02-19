#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int balancedStringSplit(string s) {
        int countL = 0, countR = 0, answer = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'L') countL++;
            else countR++;
            if (countL == countR) {
                answer++;
                countL = 0;
                countR = 0;
            }
        }
        
        return answer;
    }
};