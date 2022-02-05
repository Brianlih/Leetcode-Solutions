#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            ans.push_back(nums[nums[i]]);
        }

        return ans;
    }
};

int main()
{
    int testcase[7] = {2,1,3,5,4,6,0};
    vector<int> nums, answer;
    for (int i = 0; i < sizeof(testcase)/4; i++){
        nums.push_back(testcase[i]);
    } 
    Solution solution;
    answer = solution.buildArray(nums);
    for (int i = 0; i < nums.size(); i++) {
        cout << answer[i] << endl;
    }

    return 0;
}