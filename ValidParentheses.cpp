class Solution {
public:
    bool isValid(string s) {
        std::stack<char> parentheses;

        for ( auto i : s) {

            if ( i == '(' || i == '[' || i == '{') {
                parentheses.push(i);
            }
            else if (!parentheses.size()) {
                return false;
            }
            else {
                if (!parentheses.size()) {
                    
                    return true;
                }

                else {
                    if (parentheses.top() == '(' && i == ')') {
                        parentheses.pop();
                    }
                    else if (parentheses.top() == '[' && i == ']') {
                        parentheses.pop();
                    }
                    else if (parentheses.top() == '{' && i == '}') {
                        parentheses.pop();
                    }
                    else {
                        return false;
                    }

                }
            }
        }

        return !(parentheses.size());
    }
};
