using namespace std;
#include <iostream>
#include <stdio.h>
#include <stack>
#include <unordered_map>

/*
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
 */

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> arr;
        unordered_map<char, char> brackets = {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };

        if (s.size() % 2 != 0)
        {
            return false;
        }

        for (int i = 0; i < s.size(); ++i)
        {   
            if (brackets.find(s[i]) == brackets.end()){
                arr.push(s[i]);
                continue;
            } 
            if (brackets[s[i]] == arr.top()){
                arr.pop();
            } else {
                return false;
            }
        }

        return true;
    }
};

int main()
{
    Solution solution;
    bool result = solution.isValid("()[]{}");
    cout << result;
    return true;
}