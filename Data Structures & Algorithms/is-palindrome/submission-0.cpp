class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();

        string newStr = "";
        for (char c : s) {
            if (isalnum(c)) {
                newStr += tolower(c);
            }
        }
        int i = 0, j = newStr.length() - 1;
        while(i <= j)
        {
            if(newStr[i] != newStr[j]) return false;
            i++;
            j--;
        }
        return true;
    }
};
