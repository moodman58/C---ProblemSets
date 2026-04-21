using namespace std;
#include <iostream>
#include <string>


class Solution {
public:
    bool isPalindrome(int x) {
        string x_string = to_string(x);

        if (x_string.size() % 2 == 0){
            return false;
        }

        for (int i = 0; i < x_string.size(); ++i){
            cout << x_string[i] << " ";
        }
        return true;
    }
};

int main(){
    Solution object;
    bool isPalindrome = object.isPalindrome(1212);
    cout << isPalindrome;
    return 0;
}