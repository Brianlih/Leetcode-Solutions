#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> countPoints(vector<vector<int> >& points, vector<vector<int> >& queries) {
        vector<int> answer;
        int count;
        double length;
        for (int i = 0; i < queries.size(); i++) {
            count = 0;
            length = 0;
            for (int j = 0; j < points.size(); j++) {
                length = sqrt(pow(queries[i][0] - points[j][0], 2) + pow(queries[i][1] - points[j][1], 2));
                if (length <= queries[i][2]) count++;
            }
            answer.push_back(count);
        }
        
        return answer;
    }
};
