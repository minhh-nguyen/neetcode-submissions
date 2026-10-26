class Solution {
public:
    bool match(char a, char b) {
        if (a == '(' && b == ')') return true;
        else if (a == '{' && b == '}') return true;
        else if (a == '[' && b == ']') return true;
        else return false;
    }
    bool isValid(string s) {
        list<char> stack;
        for (int i = 0; i<s.size(); i++) {
            if (s[i] == '(' || s[i]=='{' || s[i]=='[') {
                stack.push_front(s[i]);
            } 
            else if (s[i] == ')' || s[i]=='}' || s[i]==']') {
                if (stack.size() == 0) return false; 
                if (!match(stack.front(), s[i])) return false;
                else {
                    stack.pop_front();
                }
            }
        }
        if (stack.size()== 0) return true;
        else return false;
    }
};
