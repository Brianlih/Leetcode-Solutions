#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> answer;
        answer.push_back(first);
        for (int i = 0; i < encoded.size(); i++)
            answer.push_back(encoded[i] ^ answer[i]);

        return answer;
    }
};

class VectorInitialization {
public:
    vector<int> vec;
    VectorInitialization(int arr[], int size) {
        for (int i = 0; i < size; i++) {
            vec.push_back(arr[i]);
        }
    }
    // VectorInitialization(vector<int> vecc, int size) {
    //     for (int i = 0; i < size; i++) {
    //         vec.push_back(vecc[i]);
    //     }
    // }
};

int main()
{
    int first = 1;
    int testcase[] = {1, 2, 3};
    int testcaseSize = sizeof(testcase) / sizeof(testcase[0]);
    VectorInitialization v(testcase, testcaseSize);

    Solution sol;
    vector<int> a = sol.decode(v.vec, first);
    // VectorInitialization answer(sol.decode(v.vec, first).size());

    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }

    return 0;
}