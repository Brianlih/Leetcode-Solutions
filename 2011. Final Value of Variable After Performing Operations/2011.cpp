#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int answer = 0;
        for (int i = 0; i < operations.size(); i++) {
            if (operations[i][0] == '+' || operations[i][2] == '+') answer += 1;
            else answer -= 1;
        }

        return answer;
    }
};

int main()
{
    vector<string> operations;
    int answer;
    Solution solution;

    operations.push_back("++x");
    operations.push_back("x++");
    operations.push_back("--x");
    
    answer = solution.finalValueAfterOperations(operations);
    cout << answer << endl;

    return 0;
}