#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;


vector<int> solve(vector<int>& nums, int target){
    // Take an int target and vector of integers nums, return indicies of 2 numbers that add to target
    // cant use same element twice, and each query has only 1 solution
    unordered_map<int, int> pairIdx;

        for (int i = 0; i < nums.size(); ++i) {
            int num = nums[i];
            if (pairIdx.find(target - num) != pairIdx.end()) {
                return {i, pairIdx[target - num]};
            }
            pairIdx[num] = i;
        }

        return {};        
}
