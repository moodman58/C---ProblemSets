using namespace std;
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class Solution {
public:
    string longestCommonPrefix(vector<string> strs) {
        // Sort it lexographically
        string res = "";
        sort(strs.begin(), strs.end());

        string first = strs[0];
        string last = strs[strs.size() - 1];        

        for (int i = 0; i < min(first.size(), last.size()); ++i){
            if (first[i] == last[i]){
                res += first[i];
            } else {
                return res;
            }
        }
    }
};

int main(){
    Solution solution;
    string result = solution.longestCommonPrefix({"flower","flow","flight"});
    cout << "least common prefix: " << result;

    return 0;
}