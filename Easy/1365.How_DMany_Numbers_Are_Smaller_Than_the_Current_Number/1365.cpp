#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> answer;
        int count;
        for (int i = 0; i < nums.size(); i++) {
            count = 0;
            for (int j = (i + 1) % nums.size() ; j != i; j = (j + 1) % nums.size()) {
                if (nums[i] > nums[j]) count++;
            }
            answer.push_back(count);
        }

        return answer;
    }
};

class VectorInitialization {
public:
    vector<int> numbers;
    VectorInitialization(int arr[], int size) {
        for (int i = 0; i< size; i++)
            numbers.push_back(arr[i]);
    }
};

int main()
{
    int arr[] = {8, 1, 2, 2, 3};
    int arrSize = sizeof(arr)/ sizeof(arr[0]);
    VectorInitialization v(arr, arrSize);
    Solution sol;
    vector<int> answer = sol.smallerNumbersThanCurrent(v.numbers);
    for (int i = 0; i < answer.size(); i++)
        cout << answer[i] << endl;

    return 0;
}
