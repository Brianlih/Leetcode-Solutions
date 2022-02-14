#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        int freq, val, j, k = 0;
        int size = nums.size();
        vector<int> answer;
        for (int i = 0; k < size - 1; i++) {
            j = 2 * i;
            k = 2 * i + 1;
            freq = nums[j];
            val = nums[k];
            for (int i = 0; i < freq; i++)
                answer.push_back(val);
        }
        
        return answer;
    }
};