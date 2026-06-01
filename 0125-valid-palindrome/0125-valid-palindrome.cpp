class Solution {
public:
    bool isPalindrome(string s) {
         string n = "";
    for (char c : s) {
        if (isalnum(c)) {
            n += tolower(c);
        }
    }
    int l = 0, r = n.length() - 1;
    while (l < r) {
        if (n[l] != n[r]) {
            return false;
        }
        l++;
        r--;
    }
    return true;
    }
};