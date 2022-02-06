#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int length = 0;
        int maxLength = 0;
        for (int i = 0; i < sentences.size(); i++) {
            length = 0;
            for (int j = 0; j < sentences[i].length(); j++) {
                if (sentences[i][j] == ' ') length += 1;
            }
            if (length > maxLength) maxLength = length;
        }

        return maxLength + 1;
    }
};

int main()
{
    int answer;
    string testcase[] = {
    "alice and bob love leetcode",
    "i think so too",
    "this is great thanks very much"
    };
    vector<string> sentences;
    Solution solution;

    for (int i = 0; i < sizeof(testcase)/sizeof(testcase[0]); i++) sentences.push_back(testcase[i]);
    answer = solution.mostWordsFound(sentences);

    cout << answer << endl;

    return 0;
}