class Solution {
public:
    bool isPalindrome(string s) {
        std::string normalized;
        for (unsigned char c : s) {
            if (std::isalnum(c)) {
                normalized += static_cast<char>(std::tolower(c));
            }
        }
        s = normalized;
        size_t len = s.size();
        for (int i = 0; i < len/2; i++) {
            if (s[i] != s[len-1-i]) {
                return false;
            }
        }
        return true;
    }
};
