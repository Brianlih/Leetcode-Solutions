#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int length = nums.size();
        for (int i = 0; i < length; i++) {
            nums.insert(nums.end(), nums.begin(), nums.end() - 1);
        }

        return nums;
    }
};

int main()
{
    int a[6] = {1,2,3,4,5,6};
    vector<int> nums;
    for (int i = 0; i < sizeof(a)/4; i++) {
        nums.push_back(a[i]);
    }
    Solution sol;
    sol.getConcatenation(nums);
    int len = sizeof(nums)/4;
    for (int i = 0; i < len; i++) {
        cout << endl << nums[i] << endl;
    }

    return 0;

}