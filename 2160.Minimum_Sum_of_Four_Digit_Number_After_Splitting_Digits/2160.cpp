#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;

class Solution {
public:
    int minimumSum(int num) {
        string buffer = to_string(num);
        sort(buffer.begin(), buffer.end());
        int answer = ((buffer[0] - '0') + (buffer[1] - '0')) * 10
        + ((buffer[2] - '0') + (buffer[3] - '0'));
        
        return answer;
    }
};

int main()
{
    int number = 1325, answer;
    Solution sol;
    answer = sol.minimumSum(number);
    cout << answer << endl;

    return 0;
}
