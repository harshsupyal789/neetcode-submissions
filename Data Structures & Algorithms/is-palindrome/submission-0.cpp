class Solution {
public:
    bool isPalindrome(string s) {
       int i = 0, j = s.length() - 1;

        while (i < j) {
            char a = tolower(s[i]);
            char b = tolower(s[j]);

            if (!isalnum(a)) {
                i++;
                continue;
            }

            if (!isalnum(b)) {
                j--;
                continue;
            }

            if (a != b)
                return false;

            i++;
            j--;
        }

        return true; 
    }
};
