class Solution {
public:
    bool validPalindrome(string s) {
        int i = 0, j = s.length() - 1;
        int count1 = 0, count2 = 0;

        while(i <= j)
        {
            if(count1 > 1) break;
            if(s[i] != s[j])
            {
                count1++;
                i++;
            }else
            {
                i++;
                j--;
            }
        }

        i = 0, j = s.length() - 1;
        while(i <= j)
        {
            if(s[i] != s[j])
            {
                count2++;
                j--;
            }else
            {
                i++;
                j--;
            }
        }
        if(count1 <= 1 || count2 <= 1) return true;
        return false;
    }
};