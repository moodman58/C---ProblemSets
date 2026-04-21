using namespace std;
#include <iostream>

class Solution {
public:
    bool isPalindrome(int x) {

        if (x < 0){
            return false;
        }

        long reversedValue = 0;
        int originalValue = x;

        while (x > 0){
            reversedValue = (reversedValue * 10) + (x % 10);
            x /= 10;
        }

        return reversedValue == originalValue;
    }
};

int main(){
    Solution object;
    bool isPalindrome = object.isPalindrome(11211);
    cout << isPalindrome;
    return 0;
}